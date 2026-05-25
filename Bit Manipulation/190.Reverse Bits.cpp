class Solution {
public:
    int reverseBits(int n) {
        int ans=0;
        string s="";
        for(int i=0;i<32;i++){
            s+=(n%2+'0');   //((n&1)+'0')
            n/=2; //n>>=1;right shift means divide 2 one times)
        }
        for(int i=0;i<32;i++){
            if(s[i]=='1'){
                ans+=1LL<<(31-i);//(left shift means multiply 2)
            }
        }
        return (int)ans;
    }
};
