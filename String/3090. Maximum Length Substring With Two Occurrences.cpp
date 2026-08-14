class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.length();
        int len=0;
        int maxlen=-1;
       for(int i=0;i<n;i++){
        unordered_map<char,int> mp;
        for(int j=i;j<n;j++){
            mp[s[j]]++;
            if(mp[s[j]]<=2){
                len=j-i+1;
            }
            else{
                maxlen=max(maxlen,len);
                break;
            }
        }
        maxlen=max(maxlen,len);
    }
    return maxlen;
    }
};
