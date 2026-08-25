class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        for ( int i = 0; i < n+1 ; i++){//like i =0 
            int flag = 0;
            for( int j = 0; j < n ; j++){//now search in array for 0 with help of j 
                if(nums[j] == i){
                    flag = 1;
                    break; //quit right after finding it stops at that i 
                }  
            }
            if (flag == 0){
                return i;
            }
        }
    return -1;
    }
};