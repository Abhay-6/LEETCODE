class Solution {
    public long maxTotalValue(int[] nums, int k) {
        long maxi=Arrays.stream(nums).max().getAsInt();
        long mini=Arrays.stream(nums).min().getAsInt();

        long diff=maxi-mini;
        return k*diff;
    }
}
