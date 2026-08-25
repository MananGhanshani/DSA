class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> map;

        for ( int i = 0; i < n; i++ ){
            //increases value associated by key i 
            map[nums[i]]++;
        }

        for ( int i = 0; i < n; i++){
            if (map[nums[i]] == 1){
                return nums[i];
            }
        }
        return -1;
    }
};
