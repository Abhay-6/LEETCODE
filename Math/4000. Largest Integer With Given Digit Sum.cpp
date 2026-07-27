class Solution {
    public:
    bool digsum(int i,int s){
        long int sum=0;
        while(i>0){
            sum+=(i%10);
            i/=10;
        }
        return sum==s;
    }
public:
    int largestInteger(int n, int s) {
        if(n==1){
            for(int i=9;i>=0;i--){
                if(digsum(i,s)){
                    return i;
                }
            }
        }else if(n==2){
            for(int i=99;i>=0;i--){
                if(digsum(i,s)){
                    return i;
                }
            }
        }else if(n==3){
            for(int i=999;i>=0;i--){
                if(digsum(i,s)){
                    return i;
                }
            }
        }else if(n==4){
            for(int i=9999;i>=0;i--){
                if(digsum(i,s)){
                    return i;
                }
            }
        }else{
            for(int i=99999;i>=0;i--){
                if(digsum(i,s)){
                    return i;
                }
            }
        }
        return -1;
    }
};
