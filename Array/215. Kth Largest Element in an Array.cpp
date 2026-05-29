class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
      int ans;
	    int n=nums.size();
	    sort(nums.begin(),nums.end());
	    for(int i = 1;i<=k;i++){
	        ans=nums[n-i];
	    }
	    return ans;

        /*priority_queue<int,vector<int>,greater<int> > minHeap;
        for (const int num : nums) {
         minHeap.push(num);
          if (minHeap.size() > k)
           minHeap.pop();
    }
       return minHeap.top();*/
    }
};
