class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int first=0;
        int sec=0;
        string merged;
        while(first<word1.size() || sec<word2.size() ){
            if(first<word1.size()){
            merged.push_back(word1[first]);}
            if(sec<word2.size()){
            merged.push_back(word2[sec]);}
            first++;
            sec++;
        }
        return merged;
    }
};