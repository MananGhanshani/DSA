//dosent work
bool bs (vector<vector<int>>& matrix, int n ,int m, int target){
    int index = -1;
    for ( int i = 0; i < n; i++){
        if ( matrix[i][0] <= target && target <= matrix[i][m-1] ){
            index = i;
            break;
        }
    }
    if ( index == -1) return false;

    int low = 0;
    int high = m-1;
    
    while ( low <= high ){
        int mid = (low + high)/2;
        if ( matrix[index][mid] == target){
            return true;
        }
        else if ( matrix[index][mid] < target ) {
            low = mid + 1;
        }
        else high = mid -1;
    }
    return false;
}
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        return bs(matrix, n , m ,target);
    }
};
