int bs(vector<vector<int>>& nums, int n , int m, int target){
    for ( int i = 0 ; i < n; i++){
        int low = 0;
        int high  = m-1;
        while( low <= high ){
            int mid = (low + high)/2;
            if ( target == nums[i][mid]){
                return true;
                break;
            }
            else if( target > nums[i][mid]){
                low = mid + 1;
            }
            else high = mid - 1;
        }
    }
    return false;
}

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        return bs(matrix, n ,m ,target);
    }
};