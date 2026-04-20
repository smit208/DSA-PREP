class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int count=0;
        for(char ch:s){
           
                mp[ch]++;
            
        }
        bool hasOdd=false;
        for(auto it:mp){
            int freq=it.second;
            if(freq%2==0){
                count+=freq;
            }
            else{
                count+=freq-1;
             hasOdd=true;   
            }

        }
        if(hasOdd)  count+=1;
        return count;
    }
};