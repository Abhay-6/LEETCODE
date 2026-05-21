class Solution {
    public:
     long long int powerr(long long int base,long long int exp,int mod){
        long long int ans=1;
        while(exp>0){
            if(exp%2==1){
                ans=(ans*base)%mod;
            }
            base=(base*base)%mod;
            exp/=2;
        }
        return ans;
    }
public:
    vector<int> getGoodIndices(vector<vector<int>>& variables, int target) {
        int n=variables.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            long long int ai=variables[i][0];
            long long int bi=variables[i][1];
            long long int ci=variables[i][2];
            long long int mi=variables[i][3];
            long long int first=powerr(ai,bi,10);
            long long int second=powerr(first,ci,mi);
            if(second==target){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
