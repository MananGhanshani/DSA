class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> map;
        int n = nums.size();
        int maxi = 0;
        for (int i = 0; i<n; i++ ){
            map[nums[i]];
        }
        for (auto it : map){
            int a = it.first-1;
            if(map.find(a) == map.end()){//if its the smallest number only then start
                int cnt = 1;
                int i = it.first +1;
                while ( map.find(i) != map.end()){
                    cnt++;
                    i++;
                }
            maxi = max(maxi,cnt);
            }
        }
        return maxi;
    }
};