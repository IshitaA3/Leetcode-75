class Solution {
public:
    string removeStars(string s) {
        string res="";
        int n = s.size();
        for(int i=0;i<n;i++){
            while(i<n and s[i] != '*') 
                res+=s[i++];
            if(i==n and s[i-1] != '*') return res;
            res.pop_back();

        }
        return res;
    }
};