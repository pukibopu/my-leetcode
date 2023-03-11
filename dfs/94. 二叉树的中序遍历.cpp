#include <iostream>
#include <vector>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
   vector<int> inorderTraversal(TreeNode* root) {

            mid(root);

            return node;
    }

private:
    vector<int> node;

    void mid(TreeNode *subNode)
    {
        if(subNode==nullptr) return;
        mid(subNode->left);
        node.push_back(subNode->val);
        mid(subNode->right);
        
    }
};

