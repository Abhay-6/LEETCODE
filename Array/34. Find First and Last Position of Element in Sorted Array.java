class Solution {
    public int[] searchRange(int[] nums, int target) {
        int ans[]=new int[2];
        int firstind=-1;
        int lastind=-1;
        int n=nums.length;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                firstind=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]==target){
                lastind=i;
                break;
            }
        }
        ans[0]=firstind;
        ans[1]=lastind;
        return ans;
    }
}
