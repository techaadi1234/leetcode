class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int>s;
        int a=0;int ma=0;
        for(int i=0;i<=h.size();i++){
            while(!s.empty() && (i==h.size() || h[s.top()]>h[i]) ){
                int hi=h[s.top()];
                s.pop();
                // a=(i-s.top())* h[s.top()];
                // ma=max(ma,a);
                
                if(s.empty()){
                    a=hi*i;
                   
                }
                else{
                    a=(i-s.top()-1)* hi;
                }
                ma=max(ma,a);
            }
          
            
            s.push(i);
            
        }
return ma;
    }
};