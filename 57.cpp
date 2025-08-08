//post order tree traversal 
#include<iostream>
using namespace std;

//post order tree traversal 
#include<iostream>
#include<vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
        postorderHelper(root, result);
        return result;
    }
private:
    void postorderHelper(TreeNode* root, vector<int>& result) {
        if (root == nullptr) return;
        postorderHelper(root->left, result);
        postorderHelper(root->right, result);
        result.push_back(root->val);
    }
};

int main() {
    /* Example tree:
            1
           / \
          2   3
         / 
        4
    */
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    Solution sol;
    vector<int> postorder = sol.postorderTraversal(root);
    cout << "Postorder Traversal: ";
    for (int val : postorder) cout << val << " ";
    cout << endl;

    // Free memory
    delete root->left->left;
    delete root->left;
    delete root->right;
    delete root;
    return 0;
}
// ...existing code...