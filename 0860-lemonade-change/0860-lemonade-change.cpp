class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int f=0;int t=0;
        bool ans=true;
        for(int num:bills){
            if(num==5)f++;
            else if(num==10){
                t++;
                if(f>0)f--;
                else{ ans=false;break;}}
            else {
                if(f>0 and t>0){f--;t--;}
                else if(f>=3)f-=3;
                else {ans=false;break;}
            }
        }
        return ans;
    }
};