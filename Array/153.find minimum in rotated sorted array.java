class Solution {
    public int findMin(int[] nums) {
        // // Arrays.sort(nums);
        // // return nums[0];
        // int mini=Arrays.stream(nums).min().getAsInt(); //or Array
        // //for Collections its Collections.min(list);
        // return mini;
        int left=0;
        int right=nums.length-1;
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]>nums[right]){
                left=mid+1;
            }else{
                right=mid;
            }
        }
        return nums[left];
    }
}
