#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int cnt_max = INT_MIN;
        int index = -1;
        int n = mat.size();
        int m = mat[0].size();
        for ( int i = 0; i < n; i++ ){ 
            int cnt_ones = mat[i].end() - lower_bound(mat[i].begin(),mat[i].end(), 1);
            if(cnt_ones > cnt_max){
                cnt_max = cnt_ones;
                index = i;
            }
        }
        return {index, cnt_max};
    }
};
