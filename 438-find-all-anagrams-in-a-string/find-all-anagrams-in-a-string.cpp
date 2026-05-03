class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> mp;
        vector<int> result;
        for(char ch:p){
            mp[ch]++;
        }
        unordered_map<char,int> window;
        for(int i=0;i<p.size();i++){
             window[s[i]]++;
        }
         if(window==mp){
                result.push_back(0);
            }
        for(int i=p.size();i<s.size();i++){
            char ch=s[i-p.size()]--;
            window[ch]--;
            if(window[ch]==0) window.erase(ch);
            window[s[i]]++;
            if(window==mp){
                result.push_back(i-p.size()+1);
            }
            
        }
        return result;
    }
};