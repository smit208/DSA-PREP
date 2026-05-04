class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false; 
        unordered_map<char,int> mp;
        for(char ch:s1){
            mp[ch]++;
        }
        unordered_map<char,int> permu;
        for(int i=0;i<s1.size();i++){
            permu[s2[i]]++;
        }
        if(permu==mp){
            return true;
        }
        for(int i=s1.size();i<s2.size();i++){
            int ch=i-s1.size();
            permu[s2[ch]]--;
            if(permu[s2[ch]]==0){
                permu.erase(s2[ch]);
            }
            permu[s2[i]]++;
            if(permu==mp){
                return true;
            }
        }
        return false;
        
    }
};