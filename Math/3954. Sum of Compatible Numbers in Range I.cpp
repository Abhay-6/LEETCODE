class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        long long int ans=0;
        if(n>k){
            for(long long int i=n-k;;i++){
                if((abs(n-i)<=k) && ((n&i)==0)){
                    ans+=i;
                }
                else if((abs(n-i)>k) && ((n&i)!=0)){
                    return ans;
                }
            }
        }
        else if(n<=k){
        for(long long int i=0;;i++){
            if((abs(n-i)<=k) && ((n&i)==0)){
                ans+=i;
            }
            else if((abs(n-i)>k) && ((n&i)!=0)){
                return ans;
            }
        }
    }
        return ans;
    }
};
