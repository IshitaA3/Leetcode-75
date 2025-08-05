class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1{nums1.begin(), nums1.end()};
        set<int>s2{nums2.begin(), nums2.end()};
        unordered_map<int, int>mp1;
        unordered_map<int, int>mp2;
        for(int i : s1) mp1[i]++;
        for(int i : s2) mp2[i]++;
        vector<vector<int>>ans;
        vector<int>temp;
        for(int i : s1){
            if(mp2.count(i)==0) temp.push_back(i);
        }
        ans.push_back(temp); 
        temp.clear();
        for(int i : s2){
            if(mp1.count(i)==0) temp.push_back(i);
        }
        ans.push_back(temp);
        return ans; 
    }
};