class Solution {
public:
    int ncr(int r,int e ){
        int ans = 1;
            if (r > 0 && e > 0){
                ans*= ncr(r,e-1)*(r-e+1)/e;
            }
        return ans;
    }
    vector<int> row(int r){
        vector<int> ro;
        for (int e = 0 ; e <= r; e++){
            ro.push_back(ncr(r,e));
        }
        return ro;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> arr;
        for(int r = 0; r < numRows; r++){
        arr.push_back(row(r));
        }
        return arr;
    }
};
