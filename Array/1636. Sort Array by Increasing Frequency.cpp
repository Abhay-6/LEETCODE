class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int,int> mp;
        for(auto c:nums){
            mp[c]++;
        }
        
        sort(nums.begin(),nums.end(),[&](int a,int b){
            if(mp[a]==mp[b]){
                return a>b;
            }
            return mp[a]<mp[b];
        });
        
        return nums;
    }
};
