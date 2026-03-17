class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int> mp;
        mp[0]=1;
        int count=0;
        int prefixsum=0;
        for(int i=0;i<nums.size();i++){
            prefixsum+=nums[i];
            if(mp.count(prefixsum-goal)){
                count+=mp[prefixsum-goal];
            }
                mp[prefixsum]++;
            
        }
        return count;
    }
};