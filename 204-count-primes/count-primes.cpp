class Solution {
public:
    int countPrimes(int n) {
        if(n==1 || n==2)return 0;
        vector<int>s(n+1,1);
        for(int i=2;i<=sqrt(n);i++){
            for(int j=i*i;j<n;j+=i){
                s[j]=0;
            }
        }
        int ct=0;
        for(int i=2;i<n;i++){
            if(s[i]==1)ct++;
        }
        return ct;
    }
};