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
    vector<int> closestPrimes(int left, int right) {
        vector<int> ans(2);
        vector<int> v;
        for(int i=left;i<=right;i++){
            if(isprime(i)){
                v.push_back(i);
            }
        }
        if(v.size()<2){
            return {-1,-1};
        }
        int mindiff=INT_MAX;
        for(int i=0;i<v.size()-1;i++){
            int diff=v[i+1]-v[i];
            if(diff<mindiff){
                mindiff=diff;
                ans[0]=v[i];
                ans[1]=v[i+1];
            }
        }
        return ans;
    }
};
