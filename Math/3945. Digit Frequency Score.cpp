class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int> mp;
        int ans=0;
        while(n>0){
            mp[n%10]++;
            n/=10;
        }
        for(auto p:mp){
            int a=p.first;
            int b=p.second;
            ans+=(a*b);
        }
        return ans;
    }
};
