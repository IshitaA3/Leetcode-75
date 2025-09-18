class Solution {
public:

    bool isPossible(int mid, vector<int>& piles, int h){
        int k = 0;
        for(int i : piles){
            k += i/mid;
            if(i%mid)
                k++;
            if(k>h)
                return 0;
        }
        return 1;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int start = 1, end = INT_MIN, n = piles.size();
        int ans;
        for(int i : piles)
            end = max(end, i);
        while(start <= end){
            int mid = start+(end-start)/2;
            if(isPossible(mid, piles, h)){
                ans = mid;
                end = mid-1;
            }
            else
                start = mid+1;
        }
        return ans;
    }
};