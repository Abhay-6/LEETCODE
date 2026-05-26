class Solution {
public:
    string greatestLetter(string s) {
        string ans="";
        unordered_map<char,int> lc;
        unordered_map<char,int> uc;
        for(char c:s){
            if(c>='a' && c<='z'){
                lc[c]++;
            }
            else{
                uc[c]++;
            }
        }
        for(char i='Z';i>='A';i--){
            if(lc.find(tolower(i))!=lc.end() && uc.find(i)!=uc.end()){
                ans+=i;
                break;
            }
        }
        return ans;
    }
};
