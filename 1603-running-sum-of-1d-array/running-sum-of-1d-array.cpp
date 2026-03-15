class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> prefix;
        int n=nums.size();
        prefix.resize(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];

        }
        return prefix;
    }
};