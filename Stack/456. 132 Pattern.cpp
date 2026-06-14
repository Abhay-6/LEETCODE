class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        int second=INT_MIN;
        for(int i=n-1;i>=0;i--){
            if(nums[i]<second){
                return true;
            }

            while(!st.empty() && nums[i]>st.top()){
                second=st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         for(int k=j+1;k<n;k++){
        //             if(nums[i]<nums[k] && nums[k]<nums[j]){
        //                 return true;
        //             }
        //         }
        //     }
        // }
        // return false;
    }
};
