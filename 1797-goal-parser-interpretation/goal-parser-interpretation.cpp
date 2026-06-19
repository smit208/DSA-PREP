class Solution {
public:
    string interpret(string command) {
        string str="";
        for(int i=0;i<command.size();i++){
            if(command[i]==')') continue;
            if(command[i]=='(' && command[i+1]==')'){
                str+="o";
                i++;
            }
            else if(command[i]=='(' && command[i+1]!=')'){
                str+=command[i+1];
                i++;
            }
            else{
                str+=command[i];
            }
        }
        return str;
    }
};