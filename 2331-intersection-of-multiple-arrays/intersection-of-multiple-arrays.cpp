class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        vector<int> ans;
        for(auto &arr:nums){
            for(int x:arr){
            mp[x]++;
            }
        }
        for(auto it:mp){
            if(it.second==n){
                ans.push_back(it.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};