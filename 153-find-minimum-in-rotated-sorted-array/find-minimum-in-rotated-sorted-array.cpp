int bs(vector<int> &arr, int n){
    int low = 0;
    int high = n-1;
    int ans = INT_MAX;
    //do eleminate but first take the minimum form sorted array 
    while (low <= high){
        int mid = (low+high)/2;
        if(arr[low] <= arr[mid]){
            ans = min(ans, arr[low]);
            low = mid + 1;
        }
        else{
            ans = min(ans,arr[mid]);
            high = mid - 1;
        }
    }
    return ans;
}
class Solution {
public:
    int findMin(vector<int>& nums) {
        return bs(nums, nums.size());
    }
};