class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> mp;
        unordered_map<string,int> mp2;
        int count=0;
        for(string str:words2){
            mp[str]++;
        }
        for(string str:words1){
            mp2[str]++;
        }
        for(auto it:mp){
            if(it.second==1 && mp2[it.first]==1){
                count++;
            }
        }
        return count;
    }
};