class Solution {
    public:
    long long power(long long x,long long y){
        long long modulo=1000000007;
        long long ans=1;
        x%=modulo;
        while(y>0){
            if(y%2==1){
                ans=(ans*x)%modulo;
            }
            x=(x*x)%modulo;
            y/=2;
        }
        return ans;
    }
public:
    int sumDecoded(vector<long long>& nums) {
        long long modulo=1000000007;
        long long sum=0;
        long long n=nums.size();
        for(int i=0;i<n;i++){
            long long a=nums[i];
            int width=a%10;
            long long d=floor(a/10);
            string s=to_string(d);
            string ss="";
            string sss="";
            for(int j=0;j<width;j++){
                ss+=s[j];
            }
            for(int k=width;k<s.length();k++){
                sss+=s[k];
            }
            long long x=stoll(ss);
            long long y=stoll(sss);
            long long po=power(x,y);
            sum=(sum+po)%modulo;
        }
        return (int)sum;
    }
};
