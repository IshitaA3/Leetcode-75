class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(), i=0, j=n-1;
        int ans = 0;
        while(i<j){
            int h = min(height[i],height[j]);
            int w = j-i;
            ans = max(ans, (h*w));
            (height[i] < height[j])? i++ : j--;

        }
        return ans;
    }
};