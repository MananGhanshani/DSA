class Solution {
public:

    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); //no of rows
        int n = matrix[0].size(); //no of cols
        int col0 = 1;
        //setting zeros in borders
        //checking separetly for col0
        for ( int i = 0 ; i < m ; i++ ) {
            for ( int j = 0 ; j < n ; j++ ){
                if (matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    if( j != 0){
                        matrix[0][j] = 0;
                    }
                    else{col0 = 0;}}}}
        //checking for smaller matrix
        //if non zero then check row and col and set then to zero if both are true
        for ( int i = 1; i < m ; i++){
            for ( int j = 1 ; j < n ; j++){
                if (matrix[i][j] != 0 ){
                    if( matrix[i][0] == 0 || matrix[0][j] == 0){
                        matrix[i][j] = 0;
                    }}}}
        //now setting for upper border
        if (matrix[0][0] == 0){
            for (int j = 0 ; j < n ; j++ ){
                matrix[0][j] = 0;
            }}
        //now setting for corner row
        if ( col0 == 0){
            for (int i = 0; i < m ; i++ ){
                matrix[i][0] = 0;
            }}
    }
};
