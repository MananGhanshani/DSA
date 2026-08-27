class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int maxi =1;
        int cnt = 1;
        sort(nums.begin(),nums.end());
        for( int i = 0 ; i < n-1 ;i++){
            if( nums[i+1] == nums[i]+1 ){
                cnt++;
            }
            else if ( nums[i+1] == nums[i]){
            }
            else if ( nums [i+1] != nums[i]+1){
                cnt = 1;
            }
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};
