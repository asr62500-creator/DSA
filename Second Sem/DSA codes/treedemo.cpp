#include <iostream>
using namespace std;

// Define structure for a node
struct Node {
    char data;
    Node* left;
    Node* right;

    Node(char val) {
        data = val;
        left = right = NULL;
    }
};

// Function to print tree (sideways)
void printTree(Node* root, int space = 0, int gap = 5) {
    if (root == NULL)
        return;

    // Increase distance between levels
    space += gap;

    // Print right child first
    printTree(root->right, space);

    // Print current node after space
    cout << endl;
    for (int i = gap; i < space; i++)
        cout << " ";
    cout << root->data << "\n";

    // Print left child
    printTree(root->left, space);
}

int main() {
    // Constructing the tree
    Node* root = new Node('A');
    root->left = new Node('B');
    root->right = new Node('C');

    root->left->left = new Node('D');
    root->left->right = new Node('E');

    root->right->right = new Node('F');

    // Print the tree
    printTree(root);

    return 0;
}