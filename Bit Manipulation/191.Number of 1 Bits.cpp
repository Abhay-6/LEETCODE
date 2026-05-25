class Solution {
public:
    int hammingWeight(int n) {
        int ans=0;
        // string s="";
        // while(n>0){
        //     s+=(n%2+'0'); //(n&1+'0')
        //     n/=2;//n>>=1;
        // }
        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='1'){
        //         ans++;
        //     }
        // }
      
        while(n>0){
            if(n&1){
                ans++;
            }
            n/=2;//n>>=1;
        }
        return ans;
    }
};
