#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;
        left = right = NULL;
    }
};
node* insertBST(node* root, int val) {
    if (root == NULL) {
        return new node(val);
    }
    if (val < root->data)
        root->left = insertBST(root->left, val);
    else
        root->right = insertBST(root->right, val);
    return root;
}
void inorder(node* root) {
    if (root == NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main(){
    node* root = NULL;
    root = insertBST(root, 5);
    root = insertBST(root, 1);
    root = insertBST(root, 7);
    root = insertBST(root, 3);
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;
    return 0;
}