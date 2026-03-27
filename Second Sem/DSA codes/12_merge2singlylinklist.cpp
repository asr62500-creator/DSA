#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

void mergelist(node* &head1, node* head2)
{
    node* temp = head1;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = head2;
}

int main()
{
    // first list
    node* head1 = new node();
    node* second1 = new node();
    node* third1 = new node();

    head1->data = 10;
    head1->next = second1;
    second1->data = 20;
    second1->next = third1;
    third1->data = 30;
    third1->next = NULL;

    // second list
    node* head2 = new node();
    node* second2 = new node();

    head2->data = 40;
    head2->next = second2;
    second2->data = 50;
    second2->next = NULL;

    // display first list
    cout<<"List 1: ";
    node* temp = head1;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";

    // display second list
    cout<<"\nList 2: ";
    temp = head2;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";

    // merge lists
    mergelist(head1, head2);

    // display merged list
    cout<<"\nMerged List: ";
    temp = head1;
    while(temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";

    return 0;
}