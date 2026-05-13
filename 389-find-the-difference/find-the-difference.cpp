class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int> mp;
        char fin;
        for(char ch:s){
            mp[ch]++;
        }
        for(char ch:t){
            if(mp.find(ch)==mp.end()){
                fin=ch;
            }
            else{
                mp[ch]--;
                if(mp[ch]==0) mp.erase(ch);
            }
        }
        return fin;
    }
};