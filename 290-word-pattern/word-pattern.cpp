class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string temp="";
        for(char ch:s){
            if(ch==' '){
                words.push_back(temp);
                temp="";
            }
            else{
                temp+=ch;
            }
        }
        words.push_back(temp);
        if(pattern.size()!=words.size())   return false;
        unordered_map<char,string> mp;
        unordered_map<string,char> word;
        for(int i=0;i<pattern.size();i++){
            char pat=pattern[i];
            string str=words[i];
            if(mp.count(pat)){
                if(mp[pat]!=str) return false;
            }
            else{
                mp[pat]=str;
            }

            if(word.count(str)){
                if(word[str]!=pat)  return false;
            }
            else{
                word[str]=pat;
            }
        }
        return true;
    }
};