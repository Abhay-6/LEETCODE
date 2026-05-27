class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ans=0;
        vector<int> lastlower(26,-1);
        vector<int> firstupper(26,-1);

        for(int i=0;i<word.length();i++){
            char c=word[i];
            if(c>='a' && c<='z'){
                lastlower[c-'a']=i;
            }
            else{
                if(firstupper[c-'A']==-1){
                    firstupper[c-'A']=i;
                }
            }
        }
        for(int i=0;i<26;i++){
            if(lastlower[i]!=-1 && firstupper[i]!=-1 && lastlower[i]<firstupper[i]){
                ans++;
            }
        }
        return ans;
    }
};
