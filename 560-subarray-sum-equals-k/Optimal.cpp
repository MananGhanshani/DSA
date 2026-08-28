class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> map;
        map[0] = 1;
        int sum = 0;
        int cnt = 0;
        for ( int i = 0; i < n; i++){
            sum += nums[i];
            if( map.find(sum-k) != map.end() ){
                cnt += map[sum-k];
            }
            map[sum]++;
        }
        return cnt;
    }
};
