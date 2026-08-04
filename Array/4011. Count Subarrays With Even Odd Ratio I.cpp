class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int evenc=0;
            int oddc=0;
            for(int j=i;j<n;j++){
                if(nums[j]%2==0){
                    evenc++;
                }
                else if(nums[j]%2==1){
                    oddc++;
                }
                if(oddc==0){
                    continue;
                }
                else{
                   if(1LL*evenc*b<=1LL*oddc*a){
                    ans++;
                   }
                }
            }
        }
        return ans;
    }
};
