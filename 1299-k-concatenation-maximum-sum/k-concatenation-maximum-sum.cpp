class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        long long currentmax=0;
        const int MOD=1e9+7;
        long long maxsum=0;
        long long totalsum=0;
        int n=arr.size();
        int times=(k==1?1:2);
        for(int i=0;i<times*n;i++){
        currentmax=max((long long)arr[i%n],currentmax+arr[i%n]);
        maxsum=max(maxsum,currentmax);
    }
    for(int x:arr){
        totalsum+=x;
    }
    if(totalsum>0){
        maxsum=maxsum+((long long)(k-times)*totalsum);
    }
    return maxsum%MOD;
}
};