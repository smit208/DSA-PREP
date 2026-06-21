class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                res+=s[i];
            }
            else{
                if(!res.empty()){
                    reverse(res.begin(),res.end());
                    if(!ans.empty())    ans+=" ";
                    ans+=res;
                    res.clear();
                }
            }
        }
        if(!res.empty()){
                    reverse(res.begin(),res.end());
                    if(!ans.empty())    ans+=" ";
                    ans+=res;
                    res.clear();
                }
                return ans;
    }
};