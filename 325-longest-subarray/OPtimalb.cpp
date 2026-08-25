class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int left = 0;
        int sum = 0;
        int maxlen = 0;

        for (int right = 0; right < n; right++) {

            // 1. Add nums[right] to the window
            sum += nums[right];

            // 2. If sum is too large, shrink from left
            while (left <= right && sum > k) {
                sum -= nums[left];
                left++;
            }

            // 3. Now sum is <= k
            if (sum == k) {
                maxlen = max(maxlen, right - left + 1);
            }
        }

        return maxlen;
    }
};
