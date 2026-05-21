class Solution {
    public int longestCommonPrefix(int[] arr1, int[] arr2) {
        int ans=0;
        HashSet<String> set = new HashSet<>();
        for(int num:arr1){
            String s=Integer.toString(num);
            String temp="";

            for(char ch:s.toCharArray()){
                temp+=ch;
                set.add(temp);
            }
        }
        for(int num:arr2){
            String s=Integer.toString(num);
            String temp="";

            for(char ch:s.toCharArray()){
                temp+=ch;
                if(set.contains(temp)){
                    ans=Math.max(ans,temp.length());
                }
            }
        }
        return ans;
    }
}
