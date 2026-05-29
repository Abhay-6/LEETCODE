class Solution {
    public int findSpecialInteger(int[] arr) {
        HashMap<Integer,Integer> mp=new HashMap<>();
        int perct=(int)(0.25*arr.length);
        for(int n:arr){
            mp.put(n,mp.getOrDefault(n,0)+1);
        }
        for(Map.Entry<Integer,Integer> entry:mp.entrySet()){
            if(entry.getValue()>perct){
                return entry.getKey();
            }
        }
        return -1;
    }
}
