class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0;int r=0;int ma=0;int n=s.size();
        vector<int>ct(26,0);
        while(r<n){
            ct[s[r]-'A']++;
            while( ((r-l+1)- *max_element(ct.begin(),ct.end()) ) > k ){
                ct[s[l]-'A']--;
                l++;
            }
            ma=max(ma,(r-l+1));
            r++;
        }
        return ma;
    }
};