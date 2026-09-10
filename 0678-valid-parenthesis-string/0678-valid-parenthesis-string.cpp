class Solution {
public:
    bool checkValidString(string s) {
       int mao=0;int mio=0;
       for(char c:s){
        if(c=='('){
           mao++;mio++;
        }
        else if(c==')'){
            mao--;mio--;
        }
        else {
            mao++;mio--;
        }

       
       
      if(mao<0)return false;
      else if(mio<0){
        mio=0;
      } }
      return mio==0;
    }
};