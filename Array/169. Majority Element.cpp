class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size();
        // int count=0;
        // int ele;
        // for(int i=0;i<n;i++){
        //     if(count==0){
        //         ele=nums[i];
        //         count=1;
        //     }else if(nums[i]==ele){
        //         count++;
        //     }else{
        //         count--;
        //     }
        // }
        // int count2=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]==ele){
        //         count2++;
        //     }
        // }
        // if(count2>(n/2)){
        //     return ele;
        // }
        // return -1

        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            if(i.second>n/2){
                return i.first;
            }
        }
        return -1;
    }
};
