class Solution {
public:
    string processStr(string s) {
        int n=s.length();
        string res="";
        for(int i=0;i<n;i++){
            if(s[i]!='%' && s[i]!='*' && s[i]!='#'){
                res+=s[i];
            }
            else if(s[i]=='*'){
                if(!res.empty()){
                    res.pop_back();
                }
            }
            else if(s[i]=='#'){
                if(!res.empty()){
                    res+=res;
                }
            }
            else if(s[i]=='%'){
                if(!res.empty()){
                    reverse(res.begin(),res.end());
                }
            }
        }
        return res;
    }
};
