class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
    int maxsumarray=INT_MIN;
    int minsumarray=INT_MAX;
    int currentmax=0;
    int currentmin=0;
    for(int i=0;i<nums.size();i++){
        currentmax+=nums[i];
        maxsumarray=max(maxsumarray,currentmax);
        if(currentmax<0) currentmax=0;
        currentmin+=nums[i];
        minsumarray=min(minsumarray,currentmin);
        if(currentmin>0) currentmin=0;

    }
    return max(abs(maxsumarray),abs(minsumarray));
    }
};