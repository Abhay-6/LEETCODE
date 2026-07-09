class Solution {
public:
    long long sumAndMultiply(int n) {
        long long ans=0;
        long long i=1;
        long long x=0;
        long long sum=0;
        while(n>0){
            int digit=n%10;
            n/=10;
            if(digit==0){
                continue;
            }
            sum+=digit;
            x+=digit*i;
            i*=10;
        }
        ans=x*sum;
        return ans;
    }
};