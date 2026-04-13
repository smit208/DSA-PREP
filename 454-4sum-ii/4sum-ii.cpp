class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int count=0;
        int sum=0;
        unordered_map<int,int> mp;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                sum=nums1[i]+nums2[j];
                mp[sum]++;
            }

        }
         for(int k=0;k<nums3.size();k++){
            for(int l=0;l<nums4.size();l++){
                int sum1=nums3[k]+nums4[l];
                count+=mp[-sum1];
            }
            
        }
        return count;
    }
};