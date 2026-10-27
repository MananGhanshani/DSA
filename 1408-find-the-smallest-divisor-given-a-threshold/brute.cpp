//tld
int arr(vector<int>& arr, int n, int t){
    int maxi = INT_MIN;
    int end = *max_element(arr.begin(),arr.end());
    for (int i = 1; i <= end ; i++){
        int sum = 0;
        for (int j = 0; j < n; j++){
            sum += (arr[j]+i-1)/i;
        }
        if (sum <= t){
            return i;
        }
    }
    return -1; 
}
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans = arr(nums, nums.size(), threshold);
        return ans;
    }
};
