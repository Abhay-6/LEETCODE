class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(auto p:nums){
            mp[p]++;
        }
        int mid=(n/2);
        cout<<mid;
        if(mp[nums[mid]]>1){
            return false;
        }
        return true;
    }
};
