class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr;
        vector<int> row;
        for(int i = 0; i < numRows ; i++){
            row.clear();
            for(int j  = 0; j < i+1; j++){
                int a = i;
                int b = 1;
                int ans = 1;
                for(int k = 0; k < j+1; k++){
                    if (a > 0 && b < j+1){
                        ans *= a;
                        ans /= b;
                    }
                    a--;
                    b++;
                }
                row.push_back(ans);
            }
            arr.push_back(row);
        }
        return arr; 
    }
};
