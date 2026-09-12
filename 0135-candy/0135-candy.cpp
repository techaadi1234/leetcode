class Solution {
public:
    int candy(vector<int>& ra) {
        int n=ra.size();
        if(n==1)return 1;
        int tc=0;vector<int>ct(n,1);    
         // left to right  taking care of condn
  for(int i=1;i<n;i++){
    if(ra[i]>ra[i-1])
    ct[i]=ct[i-1]+1;
  }          
           //  right to lefft  taking care of   condn   
           for(int i=n-2;i>=0;i--){
    if(ra[i]>ra[i+1])
    ct[i]=max(ct[i],ct[i+1]+1);
  }  
  for(int i=0;i<n;i++){
   tc+=ct[i];
  }  
        return tc;


    }
};