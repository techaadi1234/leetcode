class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        stack<int>s;
        long long ts=0;int n = arr.size();
        int mod=1e9+7;
        for(int i=0;i<=n;i++){
            while(!s.empty() && (i==n || arr[s.top()]>=arr[i])){
                int mid=s.top();
                s.pop();
                int lb=s.empty()?-1:s.top();
                int rb=i;
                long long c=(mid-lb)*(rb-mid)%mod;

                ts=(ts +(c*arr[mid])%mod)%mod;
            }
            s.push(i);
        }
        return ts;
    }
};