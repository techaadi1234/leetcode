class Solution {
public:
    int totalFruit(vector<int>& f) {
        int l=0;int r=0;int ma=0;
        unordered_map<int,int>fm;
        int n=f.size();
        while(r<n){
            fm[f[r]]++;
            while(fm.size()>2){
                fm[f[l]]--;
                if(fm[f[l]]==0){
                    fm.erase(f[l]);
                }
                l++;
                }
            ma=max(ma,r-l+1);
            r++;
            
        }
        return ma;
    }
};