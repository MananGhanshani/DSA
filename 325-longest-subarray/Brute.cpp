class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int len = 0;
        for(int i = 0 ; i < n; i++){
            int sum = 0;
            for (int j = i; j < n; j++){
                sum += nums[j];
                if (sum == k){
                    len = max(len,j-i+1);
                }
            }
        }
    return len;
    }
};
