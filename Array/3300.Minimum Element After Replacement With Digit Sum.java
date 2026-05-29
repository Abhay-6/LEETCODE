class Solution {
    public int sumofdigits(int n){
        int sum=0;
        while(n>0){
            sum+=(n%10);
            n/=10;
        }
        return sum;
    }
    public int minElement(int[] nums) {
        for(int i=0;i<nums.length;i++){
            int num=nums[i];
            nums[i]=sumofdigits(num);
        }
        int mini=Arrays.stream(nums).min().getAsInt();
        return mini;
    }
}
