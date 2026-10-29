bool can_we_place(vector<int>& arr, int dist, int cows){
    int cnt_cows = 1;
    int last = arr[0];
    for ( int i = 0; i < arr.size(); i++){
        if ( arr[i] - last >= dist ){
            cnt_cows++;
            last = arr[i];
        }
    }
    if ( cnt_cows >= cows ){
        return true;
    }
    else {
        return false;
    };
    return false;
}
int bs( vector<int> & nums, int cows){
    int n = nums.size();
    int low = 0; 
    int high = nums[n-1] - nums[0];
    while ( low <= high ){
        int mid = (low + high) / 2;
        if ( can_we_place(nums,mid,cows)){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return high;
}
class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        sort( position.begin(), position.end() );
        return bs(position, m);
    }
};