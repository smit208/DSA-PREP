class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxnum=-1;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;}
            for(int i=0;i<nums.size();i++){
            if(nums[i]>0 && mp.count(-nums[i])){
                maxnum=max(maxnum,nums[i]);
            }
        }
        return maxnum;
    }
};