class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int> v;
        int n=nums.size();
        if(n==k){
            sort(nums.begin(),nums.end());
            return nums[n-1];
        }
        unordered_map<int,int> mp;
        for(int i=0;i+k<=n;i++){
            for(int j=i;j<i+k;j++){
                mp[nums[j]]++;
            }
        }
        for(auto& p:mp){
            if(p.second==1){
                v.push_back(p.first);
            }
        }
        if(v.size()==0){
            return -1;
        }
        sort(v.begin(),v.end());
        return v[v.size()-1];
    }
};
