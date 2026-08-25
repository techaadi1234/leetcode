class Solution {
public:
    string minWindow(string s, string t) {
    //     unordered_map<char ,int>fm1;   unordered_map<char,int>fm2;
    //    int ct; int ms=INT_MAX;string ans;int l=0;int r=0;int ind=0;
    //     for(int i =0;i<t.size();i++){
    //         fm1[t[i]]++;
    //     }
    //     while(r<s.size()){
    //         if(fm1.find(s[r])!=fm1.end()){
    //             fm2[s[r]]++;
                
    //         }
    //         if(fm1==fm2){
    //             ct=r-l+1;
    //             ms=min(ct,ms);
    //             ind=l;
    //             l=r+1;
    //         }
    //         r++;
    //     }
    //     ans=s.substr(ind,ms);
    //     return ms==INT_MAX?"":s.substr(ind,ms);

        unordered_map<char, int> fm1;
        for (char c : t) {
            fm1[c]++;
        }

        int l = 0, r = 0;
        int ms = INT_MAX;
        int ind = 0;
        int required = t.size();

        while (r < s.size()) {
            if (fm1[s[r]] > 0) {
                required--;
            }
            fm1[s[r]]--;

            while (required == 0) {
                if (r - l + 1 < ms) {
                    ms = r - l + 1;
                    ind = l;
                }

                fm1[s[l]]++; 
                
                if (fm1[s[l]] > 0) {
                    required++;
                }
                l++;
            }
            r++;
        }

        return ms == INT_MAX ? "" : s.substr(ind, ms);
    }
};
    
