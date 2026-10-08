class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first = -1;
        int last = -1;
        int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        if (lb < n && nums[lb] == target){
            first = lb;
        }
        if (ub > 0 && nums[ub-1] == target){
            last = ub-1;
        }
        return {first,last};
    }
};
