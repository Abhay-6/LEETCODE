class Solution {
    public int countSeniors(String[] details) {
        int ans=0;
        for(String s:details){
            String ss="";
            for(int j=11;j<=12;j++){
                ss+=s.charAt(j);
            }
            int age=Integer.parseInt(ss);
            if(age>60){
                ans++;
            }
        }
        return ans;
    }
}
