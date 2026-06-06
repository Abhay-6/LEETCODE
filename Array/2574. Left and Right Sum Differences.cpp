class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        int sum=accumulate(nums.begin(),nums.end(),0);
        int leftsum=0;
        int rightsum=sum;
        
        for(int i=0;i<n;i++){
            rightsum-=nums[i];
            ans.push_back(abs(leftsum-rightsum));
            leftsum+=nums[i];
        }
        return ans;
    }
};
