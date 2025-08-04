class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, right = 0, n = nums.size();
        int zeroes = 0;
        int ans = 0;
        while(right < n){
            if(nums[right] == 0) zeroes++;
            while(zeroes > k){
                if(nums[left] == 0) zeroes--;
                left++;
            }
            ans = max(ans, (right-left+1));
            right++;
        }
        return ans;
    }
};