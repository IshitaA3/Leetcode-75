class Solution {
public:
    void reverse(string& s, int start, int end){
        while(start<end) swap(s[start++], s[end--]);
        return;
    }
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        string word = "";
        string res = "";
        while(i<n){
            while(i<n && s[i] == ' ') i++;
            word="";
            while(i<n && s[i] != ' ') word += s[i++];
            if(word!= ""){
                if(res!="") res = word + ' ' + res;
                else res = word;
            }
        }
        return res;

    }
};