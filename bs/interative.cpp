//iterative code
int binarysearch(vector<int> & nums, int target){
    int n = nums.size();
    int low = 0;
    int high = n - 1;

    while (low <= high ){
        int mid = (low+high)/2;
        if (nums[mid] == target){
            return mid;
        }
        else if (nums[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        return - 1;
    }
}

class Solution {
public:
    void binarysearch(vector<int>& nums) {
        bs(nums, 0, nums.size()-1);
    }
};
