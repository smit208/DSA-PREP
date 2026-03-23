class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        unordered_set<int> ans;
        for(int x:nums){
            mp[x]++;
             if(mp[x]>n/3 && ans.find(x)==ans.end()){
             ans.insert(x);
             
             }
        }
        return vector<int>(ans.begin(),ans.end());
    }
};