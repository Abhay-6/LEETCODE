class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(string s:details){
            string ss="";
            for(int j=11;j<=12;j++){
                ss+=s[j];
            }
            int age=stoi(ss);
            if(age>60){
                ans++;
            }
        }
        return ans;
    }
};
