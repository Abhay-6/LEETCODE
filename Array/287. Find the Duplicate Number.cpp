class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //tc O(n) sc O(1)
    int slow = nums[nums[0]];
    int fast = nums[nums[nums[0]]];

    while (slow!=fast) {
      slow = nums[slow];
      fast = nums[nums[fast]];
      if(slow==fast)
      break;
    }
    
    slow = nums[0];

    while (slow != fast) {
      slow = nums[slow];
      fast = nums[fast];
    }

    return slow;

    //tc O(n*logn) sc O(1)
        /*int start = 1;
        int end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;
            int count = 0;

            // Count the numbers less than or equal to mid
            for (int num : nums) {
                if (num <= mid) {
                    count++;
                }
            }

            // If count is greater than mid, the duplicate lies in the left half
            if (count > mid) {
                end = mid;
            } else { // Otherwise, it lies in the right half
                start = mid + 1;
            }
        }

        return start;*/
        
        //tc O(nlogn +n) sc O(1)
        /*int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++) {
        if (nums[i] == nums[i + 1]) {
        return nums[i];
        }
    }
  return -1;*/
           
}
};
