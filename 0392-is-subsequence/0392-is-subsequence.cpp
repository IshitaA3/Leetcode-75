class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j=0;
        while(i<s.size() and j<t.size()){
            while(j<t.size() and t[j] != s[i])j++;
            if(t[j] == s[i]){i++; j++;}

        }
        if(i==s.size()) return true;
        else return false;
    }
};