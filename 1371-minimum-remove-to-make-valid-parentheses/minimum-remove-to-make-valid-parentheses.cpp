class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string st="";
        int open=0;
        string temp="";
        for(char ch:s){
           if(ch=='('){
            temp+=ch;
            open++;
           }
           else if(ch==')'){
            if(open>0){
            open--;
            temp+=ch;
           }}
           else{
            temp+=ch;
           }
          }

          for(int i=temp.size()-1;i>=0;i--){
            if(temp[i]=='(' && open>0){
                open--;
                continue;
            }
            st+=temp[i];
          }
            reverse(st.begin(),st.end());
            return st;
    }
};