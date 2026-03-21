class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int currentmax=nums[0];
         int currentmin=nums[0];
         int maxprod=nums[0];
         for(int i=1;i<nums.size();i++){
            int x=nums[i];
            int tempmax=max({x,x*currentmax,x*currentmin});
            int tempmin=min({x,x*currentmax,x*currentmin});

            currentmax=tempmax;
            currentmin=tempmin;
            maxprod=max(maxprod,currentmax);
         }
         return maxprod;

    }
};