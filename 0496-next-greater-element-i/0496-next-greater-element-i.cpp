class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>gm;
        stack<int>s;

        for(auto num:nums2){
            while(!s.empty() && s.top()<num){
                gm[s.top()]=num;
                s.pop();
            }
            s.push(num);
        }
        vector<int>ans;
        for(auto num:nums1){
            if(gm.count(num))ans.push_back(gm[num]);
            else ans.push_back(-1);
        }
        return ans;
    }
};