class Solution {
    public:
    int divisors(int num){
        int cnt=0;
        for(int i=1;i*i<=num;i++){
            if(num%i==0){
                cnt++;
                if(i!=num/i){
                    cnt++;
                }
            }
            if(cnt>4){
                return cnt;
            }
        }
        return cnt;
    }
    int summofdivisors(int numss){
        int ans=0;
        for(int i=1;i*i<=numss;i++){
            if(numss%i==0){
                ans+=i;
                if(i!=numss/i){
                    ans+=numss/i;
                }
            }
        }
        return ans;
    }
public:
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++){
            if(divisors(nums[i])==4){
                res+=summofdivisors(nums[i]);
            }
        }
        return res;
    }
};
