int sum(vector<int>& arr, int number){
        int sum = 0;
        int n = arr.size();
        for (int j = 0; j < n; j++){
            sum += (arr[j]+number-1)/number; 
        }
        return sum;
}
int bs(vector<int>&nums, int t){
    int low = 1;
    int high = *max_element(nums.begin(),nums.end());
    while (low <= high){
        int mid = (low + high)/2;
        if ( sum(nums, mid) <= t){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        if ( nums.size()> threshold){
            return -1;
        } //minimum sum or no of elements
        return bs(nums, threshold);
    }
};