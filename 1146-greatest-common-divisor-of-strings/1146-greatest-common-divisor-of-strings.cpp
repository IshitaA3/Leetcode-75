class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // string gcd = "";
        int i=0,j=0;
        int m = str1.size(), n = str2.size();
        if(str1+str2 != str2+str1) return "";
        int gcd = __gcd(m,n);

        return str1.substr(0,gcd);

    }
};