class Solution {
public:
    int minOperations(int n) {
        vector<long long> arr(n);
        for(long long int i=0;i<n;i++){
            arr[i]=(2*i)+1;
        }
        int ans=0;
        for(long long int i=0;i<arr.size();i++){
            if(arr[i]<n){
                ans+=(n-arr[i]);
            }
        }
        return ans;
    }
};
