#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

// Function to reverse the linked list
void reverseList(Node*& head) {   // ✔ reference

    Node *preNode = NULL;
    Node *currentNode = head;
    Node *nextNode = NULL;

    while (currentNode != NULL) {
        nextNode = currentNode->next;   // store next node
        currentNode->next = preNode;    // reverse current node's pointer
        preNode = currentNode;          // move preNode to current node
        currentNode = nextNode;         // move to next node
    }

    head = preNode;   // now updates head
}
void displayList(Node*Head){
    Node*temp=Head;
    cout<<"Head->";
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"Null";
}

int main ( ) {
    // Create a List
    Node*Head=new Node();
    Node*second=new Node();
    Node*third=new Node();

    // Enter Data
    Head->data=20;
    second->data=30;
    third->data=40;

    // Set pointers 
    Head->next=second;
    second->next=third;
    third->next=NULL;

    cout<<"Original Link List: ";
    displayList(Head);

    // Function call to reverse the list
    reverseList(Head);

    cout<<"\nReversed Link List: ";
    displayList(Head);

return 0;
}