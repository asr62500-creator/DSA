#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* prev;
    struct node* next;
};

void reversenode(node* &head)
{
    node* prev = NULL;
    node* current = head;
    node* next = NULL;

    while(current!=NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main()
{
     //create nodes
    node* head = new node();
    node* second = new node();
    node* third = new node();

    //assigning values
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
    //display
    cout<<"Original list: ";
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
   
    reversenode(head);
    cout<<"\nReversed list: ";
    temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
   


    return 0;
}