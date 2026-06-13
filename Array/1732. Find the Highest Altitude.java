class Solution {
    public int largestAltitude(int[] gain) {
        int n=gain.length;
        int[] arr=new int[n+1];
        int sum=0;
        arr[0]=0;
        for(int i=0;i<n;i++){
            sum+=gain[i];
            arr[i]=sum;
        }
        int ans=Arrays.stream(arr).max().getAsInt();
        return ans;
    }
}
