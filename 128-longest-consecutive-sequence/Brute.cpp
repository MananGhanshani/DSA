class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        /* sort(nums.begin(),nums.end()); */
        for (auto it : nums){
            int cnt = 1;
            int i = it+1;
            while(find/* binary_search */(nums.begin(),nums.end(),i) != nums.end() ){
                cnt++;
                i++;
            }
            maxi = max(maxi,cnt);
        }
        return maxi;   
    }
};
