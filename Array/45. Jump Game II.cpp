class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int farthest=0;
        int end=0;
        int jump=0;
        
        if(n<=1){
            return 0;
        }

        for(int i=0;i<n;i++){
            farthest=max(farthest,i+nums[i]);

            if(i==end){
                end=farthest;
                jump++;

                if(end >= n-1){
                    return jump;
                }
            } 
        }
        return jump;
    }
};
