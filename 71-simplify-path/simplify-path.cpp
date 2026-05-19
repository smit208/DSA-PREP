class Solution {
public:
    string simplifyPath(string path) {
        vector<string> st;
        for(int i=0;i<path.size();i++){
            string token="";
            while(i<path.size() && path[i]!='/'){
                token+=path[i];
                i++;
            }
           
            if(token!="") { 
                if(token==".")  continue;
                if( token==".."){
                    if(!st.empty()){
                    st.pop_back();
                    }
                }   
                else{
                st.push_back(token);
                }
            }
            
    }
    string ans="";
    for(string str:st){
        ans+="/" + str;
    }
    if(ans=="") return "/";

    return ans;
    }
};