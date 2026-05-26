class Solution {
public:
    int numberOfSpecialChars(string word) {
        int ans=0;
        unordered_map<char,int> up;
        unordered_map<char,int> lc;
        for(char c:word){
            if(c>='A' && c<='Z'){
                up[c]++;
            }
        }
        for(char c:word){
            if(c>='a'&& c<='z'){
                lc[c]++;
                if(up.find(toupper(c))!=up.end() && lc[c]<2){
                    ans++;
                }
            }
        }
        return ans;
    }
};
