class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& in, vector<int>& newIn) {
          vector<vector<int>> ans;
         int i=0;
         while(i<in.size() && newIn[0]>in[i][1]){ans.push_back(in[i]);i++;}
         
        while(i<in.size() && newIn[1]>=in[i][0]){
        newIn[0]=min(newIn[0],in[i][0]);
        newIn[1]=max(newIn[1],in[i][1]);
        i++;
    }
    ans.push_back(newIn);
    while(i<in.size()){
       ans.push_back(in[i]);i++; 
    }
    return ans;}
};