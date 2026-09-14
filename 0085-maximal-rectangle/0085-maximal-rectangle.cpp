class Solution {
    private:
    int lra(vector<int>&h){
        int n=h.size();int ma=0;stack<int>s;
        for(int i=0;i<=n;i++){
            int ch=(i==n)?0:h[i];
            while(!s.empty() && ch<h[s.top()]){
                int hi=h[s.top()];
                s.pop();
                int w=s.empty()?i:i-s.top()-1;
                ma=max(ma,hi*w);

            }
            s.push(i);

        }
        return ma;
    }
public:
    int maximalRectangle(vector<vector<char>>& m) {
        if(m.empty() || m[0].empty())return 0;

        int rows = m.size();
        int cols = m[0].size();
        vector<int> heights(cols, 0);
        int maxArea = 0;
        for (int i = 0; i < rows; ++i) {
            // Update the heights array for the current row
            for (int j = 0; j < cols; ++j) {
                if (m[i][j] == '1') {
                    heights[j]++;
                } else {
                    heights[j] = 0;
                }
            }
            maxArea = max(maxArea, lra(heights));
        }
     return maxArea;} 
};