class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int  n = nums.size();
        vector<int> sub;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (int i = n-1 ; i >= 0; i--){
            if(nums[i] >= maxi){
                sub.push_back(nums[i]);
                maxi = max(maxi,nums[i]);
            }
            else{
                for (int j = 0; j < sub.size(); j++ ){
                    if (sub[j] > nums[i]){
                        mini = min(mini,sub[j]);
                    }
                }
                auto it = find(nums.begin()+i+1,nums.end(),mini);
                swap(*it,nums[i]);
                sort(nums.begin()+i+1,nums.end());
                return;
            }
        }
        reverse(nums.begin(),nums.end());
    }
};
