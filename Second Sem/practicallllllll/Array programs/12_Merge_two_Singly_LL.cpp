#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

// Merge using void
void mergeLists(Node* head1, Node* head2) {

    // If first list is empty
    if(head1 == NULL) {
        head1 = head2;   // assign head2 to head1 and return
        return;          // just stop function
    }

    // Go to last node of first list
    Node* temp = head1;
    while(temp->next != NULL) {
        temp = temp->next;
    }

    // Attach second list
    temp->next = head2;
}

// Display function
void display(Node* head) {
    while(head != NULL) {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
}

int main() {

    // List 1: 10->20->30
    Node* head1 = new Node{10, NULL};
    head1->next = new Node{20, NULL};
    head1->next->next = new Node{30, NULL};

    // List 2: 40->50->60
    Node* head2 = new Node{40, NULL};
    head2->next = new Node{50, NULL};
    head2->next->next = new Node{60, NULL};

    // Merge head2 into head1
    mergeLists(head1, head2);

    cout << "Merged List: ";
    display(head1);

    return 0;
}