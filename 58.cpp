
// Binary Tree build and inorder traversal
#include <iostream>
using namespace std;

class tree {
public:
    int data;
    tree* left;
    tree* right;
    tree(int val) : data(val), left(NULL), right(NULL) {}
};

tree* buildTree(tree* root) {
    cout << "Enter data: ";
    int val;
    cin >> val;
    if(val == -1)
        return NULL;
    root = new tree(val);
    cout << "Enter data for left node of " << val << ": " << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for right node of " << val << ": " << endl;
    root->right = buildTree(root->right);
    return root;
}

void inorder(tree* root) {
    if(root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    tree* root = NULL;
    root = buildTree(root);
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;
    return 0;
}