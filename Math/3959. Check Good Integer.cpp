class Solution {
public:
    bool checkGoodInteger(int n) {
        int dsum=0;
        int ssum=0;
        while(n>0){
            dsum+=(n%10);
            ssum+=pow((n%10),2);
            n/=10;
        }
        return ssum-dsum>=50;
    }
};
