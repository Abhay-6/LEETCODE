
class Solution {   
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int firstind=-1;
        int lastind=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                firstind=i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==target){
                lastind=i;
                break;
            }
        }
        ans.push_back(firstind);
        ans.push_back(lastind);
        return ans;   
    }   
};
