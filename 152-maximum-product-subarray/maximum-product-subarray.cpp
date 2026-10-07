class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //if positive multiply every one 
        //if even negative multiply every one 
        //if odd negative multiply either prefix max or suffix max of every negative
        //if zero then each section between zero check 

        int n = nums.size();
        int maxi = INT_MIN;
        int suffix = 1; 
        int prefix = 1;

        for ( int i = 0; i < n ; i++){
            if (prefix == 0) {
                prefix = 1;
            }
            if (suffix == 0) {
                suffix = 1;
            }
            prefix *= nums[i];
            // keeps multipling from front if zero then reset
            suffix *= nums[n-1-i];
            // keeps multipling from back if zero then reset
            maxi = max (maxi , max(prefix,suffix));
        }
        return maxi;
    }

};