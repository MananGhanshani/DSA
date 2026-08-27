class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n = nums.size();
        vector<int> leader;
        
        for(int i = 0; i<n ; i++){
            bool ok = true;
            for (int j = i+1; j < n; j++){
                if (nums[j] > nums[i]){
                    ok = false;
                }
            }
            if(ok == true){
                leader.push_back(nums[i]);
            }
        }
        return leader;
    }
};
