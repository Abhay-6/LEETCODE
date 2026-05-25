class Solution {
    public int hammingWeight(int n) {
        int ans=0;
        String s="";
        while(n>0){
            char c=(char)((n%2)+'0');
            s+=c;
            n/=2;
        }
        String rev= new StringBuilder(s).reverse().toString();
        for(int i=0;i<rev.length();i++){
            if(rev.charAt(i)=='1'){
                ans++;
            }
        }
        return ans;
    }
}
