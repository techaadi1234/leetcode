class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        vector<int>s;
        for(int i=0;i<a.size();i++){
            bool b=true;
            while(!s.empty() && s.back()>0 && a[i]<0 ){
              if(s.back() < -a[i]){s.pop_back();continue;}
              else if(s.back() == -a[i]){s.pop_back();b=false;break;}
              else {b=false;break;} }
           if(b)  s.push_back(a[i]);
        }
return s;
    }
};