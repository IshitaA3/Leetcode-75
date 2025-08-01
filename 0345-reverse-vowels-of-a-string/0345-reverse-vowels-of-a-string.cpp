class Solution {
public:
    string reverseVowels(string s) {
        int start = 0, end = s.size()-1;
        set<char>vow{'a','e','i','o','u', 'A','E','I','O','U'};
        while(start < end){
            // char c1 = tolower(s[start]), c2 = tolower(s[end]);
            // // c1.toLowerCase();
            // // c2.toLowerCase();
            // while((start<end) and(c1!='a') and (c1!='e') and (c1!='i') and (c1!='o') and (c1!='u'))
            //     start++;
            // while((start<end) and (c2!='a') and (c2!='e') and (c2!='i') and (c2!='o') and (c2!='u'))
            //     end--;
            // swap(s[start], s[end]);
            // cout<<s<<endl;

            while(start<end and vow.find(s[start]) == vow.end()) start++;
            while(start<end and vow.find(s[end]) == vow.end()) end--;

            if(start<end) swap(s[start++], s[end--]);
        }
        return s;
    }
};