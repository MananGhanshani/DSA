bool bs (vector<vector<int>>& matrix, int n ,int m, int target){
    int low = 0;
    int high = n*m -1 ;
    while (low <= high){
        int mid = (low+high)/2;
        int row = mid/m;
        int col = mid%m;
        if (matrix[row][col] == target ){
            return true;
        }
        else if (matrix[row][col] > target ){
            high = mid - 1;
        }
        else low = mid + 1;
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
