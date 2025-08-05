class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int>mp;
        for(int i : arr) mp[i]++;
        vector<bool>temp(arr.size(),0);
        for(auto i : mp) {
            if(temp[i.second] == 1) return 0;
            temp[i.second] = 1;
        }
        return 1;
    }
};