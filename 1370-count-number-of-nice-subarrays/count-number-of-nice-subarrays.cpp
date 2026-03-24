class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int sum=0;
        int count=0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(int &x:nums){
            if(x%2==0){
                x=0;}
            else
                x=1;

            sum+=x;
            if(mp.find(sum-k)!=mp.end())  count+=mp[sum-k];

            mp[sum]++;
        }
        
      return count;  
    }
};