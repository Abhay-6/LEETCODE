class Solution {
    public:
    bool isprime(int n){
        if(n==0 || n==1){
            return false;
        }
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int first=nums[i][i];
            int second=nums[i][nums.size()-i-1];
            if(isprime(first)){
                ans=max(ans,first);
            }
            if(isprime(second)){
                ans=max(ans,second);
            }
        }
        return ans;
    }
};
