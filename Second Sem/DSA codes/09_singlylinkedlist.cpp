#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next; //pointer to next node;;self referential structure
};

//count no. of nodes
int countnodes(node* head)
{
    int count=0;
    node* temp = head;

    while(temp!=NULL)
    {
        count++;
        temp = temp->next;                                          
    }
    return count;
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
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
    cout<<"\nNumber of nodes = "<<countnodes(head);

    return 0;
}

