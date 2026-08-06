class Solution {
    public:
    int prodDig(int a){
        int ans=1;
        while(a>0){
            ans*=(a%10);
            a/=10;
        }
        return ans;
    }
public:
    int smallestNumber(int n, int t) {
        for(int i=n;;i++){
            int prod=prodDig(i);
            if(prod%t==0){
                return i;
            }
        }
        return -1;
    }
};
