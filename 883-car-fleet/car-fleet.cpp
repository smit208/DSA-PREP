class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<vector<int>> pair;
        int count=0;
        double temp=-1;
        for(int i=0;i<position.size();i++){
            pair.push_back({position[i],speed[i]});
        }
        sort(pair.begin(),pair.end(),[](vector<int>&a,vector<int>&b){
            return a[0]>b[0];
        });
        for(int i=0;i<position.size();i++){
            double time=(double)(target-pair[i][0])/pair[i][1];
            if(temp<time){
                count++;
                temp=time;
            }
            
        }
        return count;
    }
};