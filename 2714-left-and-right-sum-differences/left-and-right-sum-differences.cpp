class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> answer(n);
        int leftsum=0;
        int totalsum=0;
        for(int num:nums){
            totalsum+=num;
        }
        for(int i=0;i<n;i++){
            int rightsum=totalsum-leftsum-nums[i];
            answer[i]=abs(leftsum-rightsum);
            leftsum+=nums[i];
        }
        return answer;
    }
};