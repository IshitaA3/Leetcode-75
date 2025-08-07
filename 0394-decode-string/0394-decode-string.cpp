class Solution {
public:
    string decodeString(string s) {
        stack<string>st;
        int i=0, n =s.size();
        while(i<n){
            if(s[i]!=']') st.push(string(1,s[i]));
            else{
                string temp = "";
                while(!st.empty() and st.top()!="["){
                    temp = st.top()+temp;
                    st.pop();
                }
                if(!st.empty()) st.pop(); //removing '['
                string num = "";
                while(!st.empty() and isdigit(st.top()[0])){
                    num = st.top()+num;
                    st.pop();
                }
                int mul = (num.empty())? 1:stoi(num);
                string res="";
                for(int i=1;i<=mul;i++) res+=temp;

                st.push(res);
            }
            i++;
        }
        string result = "";
        while(!st.empty()){
            result = st.top()+result;
            st.pop();
        }
        return result;
    }
};