#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

node* head = NULL;
//insert at begin
int insertBegin(int value)
{
    node* newnode = new node();
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}
//insert at end
int insertEnd(int value)
{
    node* newnode = new node();
    newnode->data = value;
    newnode->next = NULL;
     
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
//insert at specific position
int insertrandom(int value, int pos)
{
    node* newnode = new node();
    newnode->data = value;
    node* temp = head;

    for(int i = 1; i<pos-1; i++)
    {
        temp = temp->next;
    }

    newnode->next = temp->next;
    temp->next = newnode;
}
//display
void display()
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

int main()
{
    head = new node();
    node* second = new node();
    node* third = new node();

    head->data = 20;
    second->data = 30;
    third->data = 40;

    head->next = second;
    second->next = third;
    third->next = NULL;

    insertBegin(10);
    insertEnd(50);
    insertrandom(25,3);
    display();
    return 0;
}