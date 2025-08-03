class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0, j = 0;
        double ans = INT_MIN;
        int sum = 0; 
        while(j<k) sum += nums[j++];
        ans = max(ans, (double)(sum)/k);
        i=1;
        while(j<nums.size()){
            sum -= nums[i-1];
            sum+= nums[j];
            ans = max(ans, (double)(sum)/k);
            i++; j++;
        }
        return ans;
    }
};