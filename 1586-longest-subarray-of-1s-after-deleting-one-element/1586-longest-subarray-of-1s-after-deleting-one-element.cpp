class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zeroes = 0, n =nums.size(), ans = 0, left=0, right=0;
        while(right < n){
            if(nums[right] == 0) zeroes++;
            while(zeroes > 1) {
                if(!nums[left]) zeroes--;
                left++;
            }
            ans = max(ans, right-left);
            right++;
        }
        return ans;
    } 
};