class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = -1;
        for ( int i = 0; i < n ; i++){
            if (nums[i] == 0 ){
                j = i;
                break; //to stop at first one
            }// 123 0 found it j 45 ( 1 1 1 3 times)
        }
        if (j == -1) return;

        for ( int i = j+1; i < n; i++ ){
            if (nums[i] != 0){
                swap(nums[i],nums[j]);
                j++;
            }
        }// 1230 4 found it 5
         // 1234 0 make this j 5  ( 1 1 2 times)


    }
};