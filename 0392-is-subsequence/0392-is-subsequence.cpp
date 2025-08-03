class Solution {
public:
    bool isSubsequence(string s, string t) {
        unordered_map<char, int>mp;
        for(int i=0;i<t.size();i++) {
            if(mp.find(t[i]) == mp.end()) mp[t[i]] = i;
        }
        int prev = -1;
        // for(int i=0;i<s.size();i++){
        //     if(mp.find(s[i]) != mp.end()){
        //       if(mp[s[i]] < prev) return 0;
        //       else prev= mp[s[i]];      
        //     }
        //     else return 0;
        // }
        // return 1;
        int i = 0, j=0;
        while(i<s.size() and j<t.size()){
            while(j<t.size() and t[j] != s[i])j++;
            if(t[j] == s[i]){i++; j++;}

        }
        if(i==s.size()) return true;
        else return false;
    }
};