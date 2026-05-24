class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s="";
        string ss="";
        for(string c:word1){
            s+=c;
        }
        for(string c:word2){
            ss+=c;
        }
        return s==ss;
    }
};
