class Solution {
public:
    bool backspaceCompare(string s, string t) {
        if (build(s)==build(t))    return true;

        return false;
    }

    string build(string str){
        string result="";
        for(char ch:str){
            if(ch=='#'){
                if(!result.empty()){
                    result.pop_back();
                }
            }
            else{
                result+=ch;
            }
        }
        return result;
    }
};