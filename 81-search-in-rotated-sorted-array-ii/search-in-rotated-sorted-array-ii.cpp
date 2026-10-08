int bs(vector<int>&arr, int target, int n){
    int low = 0;
    int high = n-1;
    while (low <= high){
        int mid = (high + low)/2;
        if (arr[mid] == target){
            return mid;
        }
        if(arr[low] == arr[mid] && arr[mid] == arr[high]){
            low++;
            high--;
            continue;
        }
        else if (arr[low] <= arr[mid]){
            if(arr[low] <= target && target <= arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if(arr[mid] <= target && target <= arr[high]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
    }
    return -1;
}
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = bs(nums, target, n);
        if (ans == -1){
            return 0;
        }
        else {
            return 1;
        }
    }
};