class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        int n=words.size();
        // unordered_map<int,char> mp;
        // char ch='z';
        // for(int i=0;i<26;i++){
        //     mp[i]=ch;
        //     ch--;
        // }
        for(int i=0;i<n;i++){
            string s=words[i];
            int w=0;
            for(int i=0;i<s.length();i++){
                w+=weights[s[i]-'a'];
            }
            w%=26;
            // ans+=mp[w];
            ans+='z'-w;
        }
        return ans;
    }
};
