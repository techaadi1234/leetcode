class Solution {
public:
    int jump(vector<int>& nums) {
        if (nums.size() <= 1) return 0;
        int ct=0;int f=0;int mi=0;
        for(int i=0;i<nums.size();i++){
           
            mi=max(mi,i+nums[i]);
             if(mi>=nums.size()-1){ct++;break;}
            if(i==f){ct++;
            f=mi;}

        }
        return ct;
    }
};