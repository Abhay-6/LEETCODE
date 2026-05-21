class Solution {
    public String reverseWords(String s) {
        Scanner sc=new Scanner(s);
        ArrayList<String> list=new ArrayList<>();
        while(sc.hasNext()){
            String word=sc.next();
            list.add(word);
        }
        Collections.reverse(list);

        StringBuilder ans = new StringBuilder();
        for(int i=0;i<list.size();i++){
            ans.append(list.get(i));
            if(i!=list.size()-1){
                ans.append(" ");
            }
        }
        return ans.toString();
    }
}
