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

// Function to print the tree structure
void printTree() {
    cout << "        A\n";
    cout << "       / \\\n";
    cout << "      B   C\n";
    cout << "     / \\   \\\n";
    cout << "    D   E   F\n";
}

int main() {
    // Constructing the tree
    Node* root = new Node('A');
    root->left = new Node('B');
    root->right = new Node('C');

    root->left->left = new Node('D');
    root->left->right = new Node('E');

    root->right->right = new Node('F');

    // Print tree structure
    printTree();

    return 0;
}