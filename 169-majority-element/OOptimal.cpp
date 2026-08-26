class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int ele = 0;
        for ( int i = 0; i < n; i++){
            if(cnt == 0){
                ele = i;
            }
            if (nums[ele] == nums[i]){
                cnt++;
            }
            else cnt--;
            
        }
        return nums[ele];
    }
};
