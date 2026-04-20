class Solution {
public:
    int compress(vector<char>& chars) {
        int read=0;
        int write=0;
        while(read<chars.size()){
            char current=chars[read];
            int count=0;
            while(read<chars.size() && chars[read]==current){
                read++;
                count++;
            }
            chars[write++]=current;
            if(count>1){
                string ch=to_string(count);
                for(char ci:ch){
                    chars[write++]=ci;
                }

            }
        }
        return write;
    }
};