int max_ele_row_index(vector<vector<int>>& arr, int n , int m, int mid){
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i][mid]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i][mid] == maxi){
            return i;
        }
    }
    return -1;
}
pair<int,int> bs (vector<vector<int>> & arr, int n, int m){
    int low = 0;
    int high = m-1;
    while (low <= high){
        int mid = (low + high)/2;
        int row = max_ele_row_index(arr, n, m , mid);
        int left = (mid-1>=0) ? arr[row] [mid-1] : -1;
        int right = (mid+1<m) ? arr[row] [mid+1] :  -1;

        if (arr[row][mid] > left && arr[row][mid] > right){
            return {row, mid};
        }
        else if ( arr[row][mid] < left ){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return {-1,-1};
}
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        auto [row,col] = bs(mat, n, m);
        return {row,col};
    }
};
