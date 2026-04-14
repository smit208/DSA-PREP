class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        sort(intervals.begin(),intervals.end());
        result.push_back(intervals[0]);
        for(int current=1;current<intervals.size();current++){
            vector<int>& last = result.back();
            if(intervals[current][0]<=last[1]){
              last[1]=max(intervals[current][1],last[1]);
            }
            else{
                result.push_back(intervals[current]);
            }

        }
        return result;
    }
};