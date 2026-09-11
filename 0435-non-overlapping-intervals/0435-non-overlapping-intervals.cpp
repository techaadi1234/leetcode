class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        int ct=0;
        if(in.empty())return 0;
        sort(in.begin(),in.end(),[](const vector<int>&a,const vector<int>&b){
            return a[1]<b[1];
        });
        int le=in[0][1];
        for(int i=0;i<in.size()-1;i++){
            if(le>in[i+1][0]){ct++;}
            else le=in[i+1][1];
        }
        return ct;
    }
};