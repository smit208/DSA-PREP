class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        int lucky=-1;
        int first=0;
        int second=1;
        for(auto it:mp){
            if(it.first==it.second){
                lucky=max(lucky,it.first);
            }
        }
        return lucky;
    }
};