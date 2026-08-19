class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int r=0;int l=0;
        int n=nums.size();int ma=0;
        while(r<n){
           if(nums[r]==0)k--;
           while(k<0){
            if(nums[l]==0){
            k++;
            }l++;
           }
          
ma=max(ma,(r-l+1));
 r++;
        }
    
        return ma;
    }
};