class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0;
        long long maxi = LONG_MIN;
        int n = nums.size();
        int start = 0;
        int ansStart = -1;
        int ansEnd = -1;

        for (int i= 0; i < n; i++){
            if (sum==0){
                start = i;
            }
            sum += nums[i];
            if(sum>maxi){
                maxi = sum;
                ansStart = start;
                ansEnd = i;
            }
            if (sum<0){
                sum = 0;
            }
        }
        return maxi;
    }
};
