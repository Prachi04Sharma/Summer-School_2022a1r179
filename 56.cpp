#include<iostream>
using namespace std;
class tree{
    public:
    int data;
    tree* left;
    tree* right;
    tree(int val) : data(val) , left(NULL) , right(NULL){}
};
int main(){
    tree* root = new node(10);
    root->left = new root(20);
    root->right = new root(30);
    root->left = new root(40);
    root->left->right = new root(50);
    root->right->left = new root(60);
    root->right->right = new root(70);
    
}