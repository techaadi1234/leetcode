class Solution {
public:
    long long subArrayRanges(vector<int>& n) {
        stack<long long>s;
         stack<long long>s2;
        long long tmi=0,tma=0;
        for(int i=0;i<=n.size();i++){
           while(!s.empty() && (i==n.size() || n[s.top()]>=n[i])){
            long long mid=s.top();
            s.pop();
            long long lb=s.empty()? -1:s.top();
            long long rb=i;
            tmi=(tmi+(1LL*(mid-lb)*(rb-mid)*n[mid]) );   }

             while(!s2.empty() && (i==n.size() || n[s2.top()]<=n[i])){
            long long mid=s2.top();
            s2.pop();
         long long lb=s2.empty()?-1:s2.top();
            long long rb=i;
            tma=(tma+(1LL *(mid-lb)*(rb-mid)*n[mid]) );
           }
       s.push(i);
       s2.push(i);
        }
        long long ans=(tma-tmi);
        return ans;
    }
};