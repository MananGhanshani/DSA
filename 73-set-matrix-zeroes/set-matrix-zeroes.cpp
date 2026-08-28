class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(); //no of rows
        int n = matrix[0].size(); //no of cols
        vector <int> row  (m,0);
        vector <int> col (n,0);
        int a = INT_MIN;

        for (int i = 0; i < m ; i++){
            for(int j = 0; j < n ; j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;}}}

        for (int i = 0; i < m; i++){
            if(row[i] == 1 ){
                for( int j = 0; j < n ; j++){
                    matrix[i][j] = 0;}}}

        for (int j = 0; j < n; j++){   
            if(col[j] == 1 ){
                for( int i = 0; i < m ; i++){
                    matrix[i][j] = 0;}}}      
    }
};