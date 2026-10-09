int bs (vector<int> &arr, int n){
    if( n == 1) return arr[0];
    if(arr[0] != arr[1]) return arr[0];
    if(arr[n-2] != arr[n-1])return arr[n-1];
    int low = 1;
    int high = n-2;
    while (low <= high){
        int mid = (high+low)/2;
        if (arr[mid-1] != arr[mid] && arr[mid] != arr[mid+1]){
            return arr[mid];
        }
        if (mid % 2 == 1 && arr[mid] == arr[mid-1]){
            low = mid + 1;
        }
        else if(mid % 2 == 1 && arr[mid] == arr[mid+1]){
            high = mid - 1;
        }
        else if(mid % 2 == 0 && arr[mid] == arr[mid-1]){
            high = mid - 1;
        } 
        else if(mid % 2 == 0 && arr[mid] == arr[mid+1]){
            low = mid + 1;
        }
    }
    return -1;
}
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        return bs(nums, nums.size());
    }
};
