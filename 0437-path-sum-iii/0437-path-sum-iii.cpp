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
using ll = long long int;
    void countPath(TreeNode *root, int target, ll sum, int &count, unordered_map<ll, int>& mp){
        if(!root)
            return;
        sum += root->val;
        if(mp.find(sum-target) != mp.end()){
            count += mp[sum-target];
        }
        mp[sum]++;
        countPath(root->left, target, sum, count, mp);
        countPath(root->right, target, sum, count, mp);
        mp[sum]--;
    }

    int pathSum(TreeNode* root, int targetSum) {
        unordered_map <ll , int>mp;
        //sum : frequency
        mp[0] = 1;
        int count = 0;
        countPath(root, targetSum, 0, count, mp);
        return count;
    }
};