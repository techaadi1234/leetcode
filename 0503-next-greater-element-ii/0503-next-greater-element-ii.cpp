class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
         int n=nums.size();
        stack<int>s;
        vector<int>res(n,-1);
       
        for(int i=0;i<2*n-1;i++){
            int ir=i%n;
            while(!s.empty() && nums[s.top()]<nums[ir]){
                res[s.top()]=nums[ir];
                s.pop();
            }
           if(i<n) s.push(ir);
        }
        return res;
    } 
};