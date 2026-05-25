class Solution {
    public String binaryrep(int m){
        if(m==0){
            return "0";
        }
        String s="";
        while(m>0){
            s+=(char)((m%2)+'0');
            m/=2;
        }
        String rev=new StringBuilder(s).reverse().toString();
        return rev;
    }
    public int count(String ss){
        int ans=0;
        for(int i=0;i<ss.length();i++){
            if(ss.charAt(i)=='1'){
                ans++;
            }
        }
        return ans;
    }
    public int[] countBits(int n) {
        int ans[]=new int[n+1];
        for(int i=0;i<=n;i++){
            String s=binaryrep(i);
            int cnt=count(s);
            ans[i]=cnt;
        }
        return ans;
    }
}
