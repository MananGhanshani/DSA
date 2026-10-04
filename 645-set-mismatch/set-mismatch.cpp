class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        //if nums 122345 and it should be 12345 number is same
        int n = nums.size();
        int m = -1;
        int r = -1;
        
        for ( int i = 1; i <= n; i++){
            int cnt = 0;
            for ( int j = 0; j< n ; j++){
                if (nums[j] == i){
                    cnt++;
                }
            }
            if (cnt == 2){
                r = i;
            }
            else if (cnt == 0){
                m = i;
            }
        }
        return {r,m};
    }
};