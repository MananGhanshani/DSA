int bs(vector<int>&arr, int n){
    if ( n == 1) return 0;
    if ( arr[0] > arr[1]) return 0;
    if ( arr[n-1]>arr[n-2]) return n-1;
    int low = 1;
    int high = n-2;
    while (low <= high){
        int mid = (high-low)/2 + low;
        if ( arr[mid - 1] < arr[mid] && arr[mid] > arr[mid+1]) return mid;
        if ( arr[low] == arr[mid] && arr[mid] == arr[mid +1])  low = mid + 1;
        else if ( arr[mid] < arr[mid+1]) low = mid + 1;
        else  high = mid - 1;
    }
    return -1;
}
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        return bs(nums, nums.size());  
    }
};
