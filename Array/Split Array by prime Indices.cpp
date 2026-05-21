class Solution {
    public:
    bool isprime(long long int m){
        if(m==0 || m==1){
            return false;
        }
        for(int i=2;i*i<=m;i++){
            if(m%i==0){
                return false;
            }
        }
        return true;
    }
public:
    long long splitArray(vector<int>& nums) {
        long long ans=0;
        long long int n=nums.size();
        long long int suma=0;
        long long int sumb=0;
        for(long long int i=0;i<n;i++){
            if(isprime(i)){
                suma+=nums[i];
            }else{
                sumb+=nums[i];
            }
        }
        ans=labs(suma-sumb);
        return ans;
    }
};
