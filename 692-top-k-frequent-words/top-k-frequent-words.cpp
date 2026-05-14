class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> mp;
        for(string ch:words){
            mp[ch]++;
        }
        vector<pair<string,int>> result(mp.begin(),mp.end());
        sort(result.begin(),result.end(),[](pair<string,int>a,pair<string,int>b){
            if(a.second == b.second) {
        return a.first < b.first;
    }
            return a.second>b.second;
        });
        vector<string> ans;
        for(int i=0;i<k;i++){
            ans.push_back(result[i].first);
        }
        return ans;
    }
};