class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxc = 0;
        int n = candies.size();
        for(int i=0;i<n;i++) maxc = max(maxc, candies[i]);

        vector<bool>result(n, false);
        for(int i=0;i<n;i++){
            if(candies[i] + extraCandies >= maxc) result[i] = true; 
        }

        return result;
    }
};