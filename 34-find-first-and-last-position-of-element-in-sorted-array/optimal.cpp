int first(vector<int> &arr, int t, int n){
    int low = 0;
    int high = n-1;
    while (low <= high){
        int mid = (low+high)/2;
        if (arr[mid] >= t){
            high = mid-1;
        }
        else {
            low = mid+1;
        }
    }
    if (low < n && arr[low] == t){
        return low;
    }
    return -1;
}
int last(vector<int> &arr, int t,int n){
    int low = 0;
    int high = n-1;
    while (low <= high){
        int mid = (low+high)/2;
        if (arr[mid] <= t){
            low = mid+1;
        }
        else {
            high = mid-1;
        }
    }
    if (high >= 0 && arr[high] == t){
        return high;
    }
    return -1;
}
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int f = first(nums,target ,n);
        int l = last(nums,target ,n);
        return{f,l};
    }
};
