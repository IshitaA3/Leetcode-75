class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res = "";
        int m = word1.size(), n = word2.size();
        int i=0,j=0;
        while(i<m and j<n){
            res.push_back(word1[i++]);
            res.push_back(word2[j++]);
        }
        while(i<m) res.push_back(word1[i++]);
        while(j<n) res.push_back(word2[j++]);

        return res;
    }
};