class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> result;
        for(int x:nums){
            mp[x]++;
        }
        vector<pair<int,int>> vec;
        for(auto it:mp){
            vec.push_back({it.second,it.first});
        }
        sort(vec.begin(),vec.end(),[](pair<int,int>&a,pair<int,int>&b){
            if(a.first!=b.first){
                return a.first<b.first;
            }
            return a.second>b.second;
        });
        for(auto& p:vec){
            for(int i=0;i<p.first;i++){
                result.push_back(p.second);
            }
        }
        
        return result;
    }
};