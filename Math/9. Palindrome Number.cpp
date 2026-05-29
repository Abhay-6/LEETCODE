class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long long reversed=0;
        long long  y=x;
        while(y>0){
            int digits=y%10;
            reversed=reversed*10+digits;
            y/=10;
        }
        return x==reversed;
    }
};
