int partition(vector<int>&arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while ( i < j ){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;
        }
        if(i < j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
void quicksort(vector<int>& arr, int low, int high){
    if(low < high){
        int p = partition(arr, low, high);
        quicksort(arr, low ,p-1);
        quicksort(arr, p+1 , high);
    }
}

class Solution {
public:
    void quicksortarr(vector<int>& nums) {
        quicksort(nums, 0, nums.size()-1);
    }
};
