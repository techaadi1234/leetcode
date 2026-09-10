class Solution {
public:
    bool canJump(vector<int>& nums) {
       int mi=0;
       for(int i=0;i<nums.size();i++){
        if(i>mi)return false;
        mi=max(mi,i+nums[i]);

       }
       return mi>=nums.size()-1;
    }
};