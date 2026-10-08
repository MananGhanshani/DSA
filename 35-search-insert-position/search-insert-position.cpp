int lowerbound(vector<int>& nums, int target){
    int n = nums.size();
    int low = 0; 
    int high = n-1;
    
    while(low <= high){
        int mid = (low + high)/2;
        if (nums[mid] >= target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    if (low < n ){
        return low;
    }
    return n;
}
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = lowerbound(nums, target);
        return i;
    }
};