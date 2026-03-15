class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> prefix;
        int n=gain.size();
        int maxal=0;
        prefix.resize(n+1);
        prefix[0]=0;
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+gain[i];
            maxal=max(prefix[i+1],maxal);
        }
        return maxal;
    }
};