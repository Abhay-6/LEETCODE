class Solution {
    public int binarybit(int m){
        int ans=0;
        String s="";
        while(m>0){
            s+=(char)((m%2)+'0');
            m/=2;
        }
        String ss=new StringBuilder(s).reverse().toString();
        for(int i=0;i<ss.length();i++){
            if(ss.charAt(i)=='1'){
                ans++;
            }
        }
        return ans;
    }
    public int sumIndicesWithKSetBits(List<Integer> nums, int k) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            if(binarybit(i)==k){
                ans+=nums.get(i);
            }
            if(i==0){
                continue;
            }
        }
        return ans;
    }
}
