class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int n:nums){
            if(n%2==0){
                mp[n]++;
            }
        }
        int ans=-1;
        int maxfreq=0;
        for(auto &[num,freq]:mp){
            if(freq>maxfreq){
                maxfreq=freq;
                ans=num;
            }else if(freq==maxfreq && ans>num){
                ans=num;
            }
        }
        return ans;
    }
};
