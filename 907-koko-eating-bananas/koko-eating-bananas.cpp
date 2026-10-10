//  low is 1 -> sum of all element as hours not possible
// high is max elelment -> hours equal to number of element
// we have to find the index between low and high 

long long hours(vector<int>&arr, int n, int mid){
    long long hours = 0;
    for (int i = 0; i < n; i++ ){
        hours += ((long long)arr[i] + mid -1)/ mid; //ceil((double)arr[i]/mid);
    }
    return hours;
}

long long bs (vector<int>&arr, int n, int h){
    int low = 1;
    int high = INT_MIN;
    for ( int i : arr){
        if ( i > high){
            high = i;
        }
    }
    while (low <= high){
        int mid = (low + high)/2;
        if( hours(arr, n, mid) <= h ){
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
    int minEatingSpeed(vector<int>& piles, int h) {
        return bs (piles, piles.size(), h);
    }
};