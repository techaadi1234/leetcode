class Solution {
public:
int ca(vector<int>& nums, int k){
    int l=0;int r=0;unordered_map<int,int>fm; int  ts=0;
    int n=nums.size();
    while(r<n){
      fm[nums[r]]++;
         while(fm.size()>k){
           fm[nums[l]]--;
           if(fm[nums[l]]==0) fm.erase(nums[l]) ;
           l++;
        }
        
          
             ts+=r-l+1;
            r++;
        
    }
    return ts;
}
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return {ca(nums,k)-ca(nums,k-1)};
    }
};