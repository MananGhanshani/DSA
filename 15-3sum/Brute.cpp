class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<int> vec;
        set<vector<int>> st;
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size(); i++){
            vec.clear();
            int a = nums[i];
            for (int j = i+1; j < nums.size(); j++){
                int b = nums[j];
                int c = -(a+b);
                if (find(nums.begin() + j + 1, nums.end(), c) != nums.end()){
                    vec = {a,b,c};
                    sort(vec.begin(),vec.end());
                    st.insert(vec);
                }
            }
        }
        ans = vector<vector<int>>(st.begin(),st.end());
        return ans;
    }
};
