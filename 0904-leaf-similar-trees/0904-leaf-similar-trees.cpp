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
   
    void countLeaf(TreeNode *root, stack<int>&s){
        if(!root)
            return;
        if(!root->left && !root->right){
            s.push(root->val);
            return;
        }
        countLeaf(root->left, s);
        countLeaf(root->right, s);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        stack <int> s1;
        stack <int> s2;
        countLeaf(root1, s1);
        countLeaf(root2, s2);
        if(s1.size() != s2.size() )
            return 0;

        while(!s1.empty() && !s2.empty()){
            if(s1.top() != s2.top())
                return 0;
            
            s1.pop();
            s2.pop();
        }
        return 1;
    }
};