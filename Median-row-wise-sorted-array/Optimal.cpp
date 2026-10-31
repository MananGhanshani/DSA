int blackbox(vector<vector<int>> &arr, int num){
    int cnt = 0;
    int n = arr.size();
    int m = arr[0].size();
    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            if (arr[i][j] <= num){
                cnt++;
            }
        }
    }
    return cnt;
}
int bs(vector<vector<int>> &arr, int l, int h, int m){
    int low = l;
    int high = h;
    int med = m;
    while(low <= high){
        int mid = (low + high)/2;
        int s = blackbox(arr, mid);
        if ( s <= med ){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return low;
}
class Solution {
  public:
    int median(vector<vector<int>> &arr) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int n = arr.size();
        int m = arr[0].size();
        for (int i = 0; i <  n; i++){
            mini = min(arr[i][0], mini);
            maxi = max(arr[i][m-1], maxi);
        }
        int med = (n*m)/2;
        return bs(arr , mini, maxi, med );
    }
};
