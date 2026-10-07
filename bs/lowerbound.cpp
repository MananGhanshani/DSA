int lowerbound(vector<int>& nums, int target){
    int n = nums.size();
    int low = 0; 
    int high = n-1;
    //int ans = n;
    //ans is low
    while(low <= high){
        int mid = (low + high)/2;
        if (nums[mid] >= target){
            //ans = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}

class solution {
public:
    int lowerBound(vector<int> &nums, int target){
        return lowerbound(nums, target);
    }
};

//recursive
int lowerbound(vector<int>& arr, int low, int high, int target){
    if ( low > high){
        return low;
    }
    int mid = low + (high-low)/2;
    if ( arr[mid] >= target ){
        return lowerbound(arr, low, mid-1, target);
    }
    else{
        return lowerbound(arr, mid+1, high, target);
    }
}

class Solution{
public:
    int lowerBound(vector<int> &nums, int target){
        return lowerbound(nums, 0 , nums.size() - 1, target);
    }
};

//iterator
lb = lower_bound(arr.begin(), arr.end(), n ) - arr.begin();
