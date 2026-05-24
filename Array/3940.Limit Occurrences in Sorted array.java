class Solution {
    public int[] limitOccurrences(int[] nums, int k) {
        int n=nums.length;
        HashMap<Integer,Integer> mp=new HashMap<>();
        ArrayList<Integer> list=new ArrayList<>();
        for(int i=0;i<n;i++){
           mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
           if(mp.get(nums[i])<=k){
            list.add(nums[i]);
           }
        }
        int ans[]=new int[list.size()];
        for(int i=0;i<list.size();i++){
            ans[i]=list.get(i);
        }
        return ans;
    }
}
