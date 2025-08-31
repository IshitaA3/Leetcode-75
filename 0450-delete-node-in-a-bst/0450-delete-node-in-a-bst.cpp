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

    TreeNode* findMin(TreeNode* root){
        TreeNode *temp = root;
        while(temp && temp->left)
            temp=temp->left;
        return temp;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)
            return NULL;
        if(root->val == key){
            if(!root->left && !root->right){
                return NULL;
            }
            else if(!root->left && root->right){
                return root->right;
            }
            else if(root->left && !root->right){
                return root->left;
            }
            else{
                TreeNode* temp = findMin(root->right);
                root->val = temp->val;
                root->right = deleteNode(root->right, temp->val);
            }
        }
        else if(root->val > key)
            root->left = deleteNode(root->left, key);
        else
            root->right = deleteNode(root->right, key);
        return root;
    }
};