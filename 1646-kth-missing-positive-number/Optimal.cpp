int bs(vector<int> &arr, int n ,int missing){
    int low = 0;
    int high = n-1;
    while (low <= high ){
        int mid = (low + high)/2;
        int curr_mis = arr[mid] - (mid + 1);
        if ( curr_mis < missing ){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return high + missing + 1 ;
}
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        return bs(arr, arr.size() ,k);
    }
};
