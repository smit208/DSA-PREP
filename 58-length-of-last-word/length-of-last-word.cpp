class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int prev=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ' && s[i+1]!=' ')   {
                prev=count;
                count=0;
            }
            else if(s[i]!=' '){
                count++;
                prev=count;
            }
        }
        return prev;
    }
};