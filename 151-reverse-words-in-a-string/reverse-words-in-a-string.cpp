class Solution {
public:
    string reverseWords(string s) {
        string str="";
        string res="";
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]!=' '){
                res=res+s[i];
            }
            else if(!res.empty()){
                
                reverse(res.begin(),res.end());
                if(!str.empty())    str+=" ";
                str+=res;
                res.clear();
            }
        }
          if(!res.empty()) {
        reverse(res.begin(),res.end());
                if(!str.empty())str+=" ";
                str+=res;}
        return str;
    }
};