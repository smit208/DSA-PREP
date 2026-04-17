class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
       for(int i=0;i<s.size();i+=2*k){
        int left=i;
        int right=min(i+k-1,n-1);
        while(left<right){
        char temp;
        temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
        }
       }
        return s;
    }
};