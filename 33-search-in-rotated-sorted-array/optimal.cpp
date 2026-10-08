int bs(vector<int>& arr, int target, int n){
    int low = 0;
    int high = n-1;
    while (low <= high){
        int mid = (low + high )/2;
        if ( arr[mid] == target){
            return mid;
        }
        if (arr[low] <= arr[mid]){
            if(arr[low] <= target && target <= arr[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else if (arr[low] > arr[mid]){
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
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = bs(nums, target, n);
        return ans;
    }   
};
//find of mid 
//now find out sorted portion 
//in that sorted portion find if between those two pointers the target present or not 
//if present again do bs in that sorted part 
//if not present do bs in non sorted part

