class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int> mp;
        int count=0;
        for(char ch:stones){
            mp[ch]++;
        }
        for(char ch:jewels){
                count+=mp[ch];
        }
        return count;
    }
};