class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> hash;
        //map provides 0 as an intital value
        for(int i = 0; i < n; i++){
            hash[nums[i]] = 1;
        }
        for(int i = 0; i < n; i++){
            if(hash[i] == 0){
                return i;
            }
        }
        return n;
    }
};
