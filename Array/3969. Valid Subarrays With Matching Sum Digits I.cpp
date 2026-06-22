class Solution {
    public:
    bool check(long long m,int x){
        int last=m%10;
        while(m>=10){
            m/=10;
        }
        int first=m;
        return first==x && last==x;
    }
public:
    int countValidSubarrays(vector<int>& nums, int x) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            long long sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(check(sum,x)){
                    ans++;
                }
            }
        }
        return ans;
    }
};
