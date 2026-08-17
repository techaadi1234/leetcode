class Solution {
public:
    int trap(vector<int>& h) {
    int l=0;
    int r=h.size()-1;
    int lm=h[l];
    int rm=h[r];
    int tw=0;
    while(l<r){
        if(h[l]<h[r]){
            
            if(h[l]>=lm){lm=h[l];}
            else {tw+=lm-h[l];}
l++;
        }
        else{
            if(h[r]>rm){rm=h[r];}
            else tw+=rm-h[r];
            r--;
        }

    }
    return tw;}
};