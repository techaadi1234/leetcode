class Solution {
public:
int ats(vector<int>& nums, int k){
    int l=0;int r=0;int co=0;int ts=0;int n=nums.size();
    while(r<n){
        if(nums[r]%2!=0)co++;
        while(co>k){
              if(nums[l]%2!=0)co--;
              l++;
        }
        ts+=(r-l+1);
        r++;
    }
    return ts;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
       return {ats(nums,k)-ats(nums,k-1)};
    }
};