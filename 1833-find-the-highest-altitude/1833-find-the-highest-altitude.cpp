class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int>prefixSum(n+1, 0);
        prefixSum[1] = gain[0];
        for(int i=1;i<n;i++) 
            prefixSum[i+1] = prefixSum[i]+gain[i];
        int ans = 0;
        for(int i=0;i<=n;i++) 
            ans = max(ans, prefixSum[i]);
        return ans;
    }
};