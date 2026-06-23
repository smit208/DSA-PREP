class Solution {
public:
    string reformatDate(string date) {
        unordered_map<string,string> mp={
            {"Jan","01"},{"Feb","02"},{"Mar","03"},
            {"Apr","04"},{"May","05"},{"Jun","06"},
            {"Jul","07"},{"Aug","08"},{"Sep","09"},
            {"Oct","10"},{"Nov","11"},{"Dec","12"},
        };
        stringstream ss(date);
        string day,month,year;
        ss>>day>>month>>year;
        string d;
        for(char ch:day){
            if(isdigit(ch)){
                d+=ch;
            }
        } 
        if(d.size()==1) d="0"+d;
        return year+"-"+mp[month]+"-"+d;
    }
};