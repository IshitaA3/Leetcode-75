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
    int maxLevelSum(TreeNode* root) {
        int level = 1;
        queue <TreeNode*>q;
        q.push(root);
        if(!root) 
            return 0;
        TreeNode *temp;
        int ans = 0;
        int m = INT_MIN;
        while(!q.empty()){
            int size = q.size();
            int sum = 0;
            while(size--){
                temp = q.front();
                q.pop();
                sum += temp->val;
                if(temp->right) q.push(temp->right);
                if(temp->left) q.push(temp->left);
            }
            if(sum>m){
                m=sum;
                ans = level;
            }
            level++;
        }
        return ans;

    }
};