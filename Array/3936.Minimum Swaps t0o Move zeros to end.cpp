class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int ans=0;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            while(i<j && nums[i]!=0){
                i++;
            }
            while(i<j && nums[j]==0){
                j--;
            }
            if(i<j){
                ans++;
                i++;
                j--;
            }
        }
        return ans;
    }
};
