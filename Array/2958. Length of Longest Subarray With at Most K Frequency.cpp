class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int maxlen=INT_MIN;
        int l=0;
        int len=0;
        unordered_map<int,int> mp;
        for(int r=0;r<n;r++){
            mp[nums[r]]++;
            if(mp[nums[r]]<=k){
                len=r-l+1;
            }else{
                maxlen=max(maxlen,len);
                while(mp[nums[r]]>k){
                    mp[nums[l]]--;
                    l++;
                }
                len=0;
            }
            maxlen=max(maxlen,len);
        }
        return maxlen;
    }
};
