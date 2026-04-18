class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(char str:s){
            if(isalnum(str)){
                temp.push_back(tolower(str));
            }
           
        }
        int r=temp.size()-1;
        int l=0;
        while(l<r){
            if(temp[l]==temp[r]){
                l++;
                r--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};