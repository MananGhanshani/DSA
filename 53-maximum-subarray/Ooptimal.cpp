class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        int sum = 0;
        int start = 0;
        int astart = 0, aend = 0;
        for (int i = 0; i < n; i++){
            sum += nums[i];
            if ( sum > maxi){
                maxi = sum;
                astart = start;
                aend = i;
            } 
            if ( sum < 0){
                sum =0;
                start = i + 1;  
            }
            
        }
        return maxi;
    }
};
