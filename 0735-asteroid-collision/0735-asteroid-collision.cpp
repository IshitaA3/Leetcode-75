// while(!st.empty() and ((st.top()>0 and asteroids[i]<0) or (st.top()<0 and asteroids[i]>0)))


class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        int i = 0, n =asteroids.size();
        while(i<n){
            if(st.empty() or asteroids[i]>0) st.push(asteroids[i]);
            else{
                while(!st.empty() and st.top()>0 and st.top()<abs(asteroids[i]))
                    st.pop();
                
                if(!st.empty() and st.top() == abs(asteroids[i])) st.pop();
                else if(st.empty() or st.top()<0) st.push(asteroids[i]);
            }
            i++;
        }
        vector<int>res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }

        reverse(res.begin(), res.end());
        return res;
    }
};