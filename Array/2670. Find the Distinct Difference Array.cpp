class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        unordered_set<int> prefix;
        for(int i=0;i<n;i++){
            int diff=0;
            unordered_set<int> suffix;
            prefix.insert(nums[i]);
            for(int j=i+1;j<n;j++){
                suffix.insert(nums[j]);
            }
            diff=prefix.size()-suffix.size();
            ans[i]=diff;
        }
        return ans;
    }
};
