class Solution {
    public int[] pivotArray(int[] nums, int pivot) {
        int n=nums.length;
        int[] ans=new int[n];
        int ind=0;
        for(int num:nums){
            if(num<pivot){
                ans[ind++]=num;
            }
        }
        for(int num:nums){
            if(num==pivot){
                ans[ind++]=num;
            }
        }
        for(int num:nums){
            if(num>pivot){
                ans[ind++]=num;
            }
        }
        return ans;
    }
}
