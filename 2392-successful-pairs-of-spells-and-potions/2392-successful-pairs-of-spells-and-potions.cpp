class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        int n = spells.size(), m = potions.size();
        vector<int>ans;
        // for(int i=0;i<n;i++){
        //     int start=0, end=m-1;
        //     while(start<=end){
        //         int mid = start + (end-start)/2;
        //         cout<<potions[mid]<<endl;
        //         long long prod = (long long)(spells[i])*(long long)(potions[mid]);
        //         if(prod >= success){
        //             end = mid-1;
        //         }
        //         else{
        //             cout<<" CASE 2 "<<endl;
        //             start = mid+1;
        //         }
        //     }
        //     ans[i] = m-start;
        // }
        for(int spell :spells){
            long long temp = (success+ spell-1)/spell;
            auto it = lower_bound(potions.begin(), potions.end(), temp);
            ans.push_back(potions.end()-it); 
        }
        return ans;
    }
};