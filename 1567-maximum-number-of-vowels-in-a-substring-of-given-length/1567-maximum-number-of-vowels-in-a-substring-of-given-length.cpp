class Solution {
public:
    int maxVowels(string s, int k) {
        int ans = 0;
        int j=0;
        set<char>vow{'a','e','i','o','u'};
        int count = 0;
        while(j<k) {
            if(vow.find(s[j]) != vow.end()) count++; 
            j++;
        }
        ans = max(ans, count);
        int i =1;
        while(j<s.size()){
            if(vow.find(s[i-1])!= vow.end()) count--;
            if(vow.find(s[j]) != vow.end()) count++;
            ans = max(ans, count);
            i++;j++;
        }
        return ans;
    }
};