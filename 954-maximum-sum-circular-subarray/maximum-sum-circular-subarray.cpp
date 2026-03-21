class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int currentmax=0;
        int currentmin=0;
        int totalsum=0;
        int maxsum=INT_MIN;int minsum=INT_MAX;
        for(int x:nums){
            currentmax=max(x,currentmax+x);
            maxsum=max(maxsum,currentmax);

            currentmin=min(x,currentmin+x);
            minsum=min(minsum,currentmin);

            totalsum+=x;

           
        }
        if(maxsum<0) return maxsum;
        return max(maxsum,totalsum-minsum);
    }
};