/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  
    void countN(TreeNode *root, int prev, int &count){
        if(!root)
            return;
        if(prev==INT_MIN or root->val >= prev){
            count++;
            prev = root->val;
            cout<<root->val<<endl;
        }
        countN(root->left, prev, count);
        countN(root->right, prev, count);
    }

    int goodNodes(TreeNode* root) {
        int count = 0;
        countN(root, INT_MIN, count);
        return count;
    }
};