class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int r = -1, m = -1;
        for ( int x : nums){
            mp[x]++;
        }
        for( int i = 1; i <= n; i++){
            if ( mp[i] == 2){
                r = i;
            }
            else if ( mp[i] == 0){
                m = i;
            }
        }
        return {r,m};
    }
};
