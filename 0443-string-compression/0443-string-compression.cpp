class Solution {
public:
    int compress(vector<char>& chars) {
        int s = 0, e = 0;
        int n = chars.size();
        int count=0;
        string temp="";
        while(s<n and e<n){
            count=0;
            while(e<n and chars[s]==chars[e]) {count++; e++;}
            temp += chars[s];
            if(count > 1) temp+=to_string(count);
            s=e;
        }
        chars.resize(temp.size());
            for(int i=0;i<chars.size();i++){
                chars[i] = temp[i];
            }
            return chars.size();
    }
};