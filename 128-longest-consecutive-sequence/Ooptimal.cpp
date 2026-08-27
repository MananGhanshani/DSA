class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int n = nums.size();
        int maxi = 0;
        for (int i = 0; i<n; i++ ){
            s.insert(nums[i]);
        }
        for (auto it : s){
            int a = it - 1;
            if(s.find(a) == s.end()){//if its the smallest number only then start
                int cnt = 1;
                int i = it + 1;
                while ( s.find(i) != s.end()){
                    cnt++;
                    i++;
                }
            maxi = max(maxi,cnt);
            }
        }
        return maxi;
    }
};
