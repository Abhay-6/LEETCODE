class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> arr(n+1);
        int sum=0;
        arr[0]=0;
        for(int i=0;i<n;i++){
            sum+=gain[i];
            arr.push_back(sum);
        }
        int ans=*max_element(arr.begin(),arr.end());;
        return ans;
    }
};
