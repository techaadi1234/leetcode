class Solution {
public:
    int minBitFlips(int start, int goal) {
        bitset<32>start32(start);
         bitset<32>gaol32(goal);
         string s=bitset<32>(start ^ goal).to_string();
         int ct=0;
         for(int i=0;i<s.size();i++){
            if(s[i]=='1')ct++;
         }
return ct;
    }
};