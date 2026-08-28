class Solution {
public:
    int a = INT_MIN - 1;
    void mark_row(vector<vector<int>>& matrix , int i , int n ){
        for ( int j = 0 ; j < n ; j++){
            if ( matrix[i][j] != 0){
                matrix[i][j] = a;}}}
    void mark_col(vector<vector<int>>& matrix , int j  , int m){
        for ( int i = 0 ; i < m ; i++){
            if ( matrix[i][j] != 0){
                matrix[i][j] = a;}}}
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); //no of rows
        int n = matrix[0].size(); //no of cols
        for ( int i = 0 ;i < m ; i++){
            for ( int j = 0 ; j < n ; j++){
                if ( matrix[i][j] == 0){
                    mark_row(matrix , i , n);
                    mark_col(matrix , j , m);}}}
        for ( int i = 0 ;i < m ; i++){
            for ( int j = 0 ; j < n ; j++){
                if ( matrix[i][j] == a){
                    matrix[i][j] = 0;}}}
    }
};
