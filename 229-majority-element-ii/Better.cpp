class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector<int> list;
        for ( int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
            if (mpp[nums[i]] > nums.size()/3 && 
            find(list.begin(),list.end(),nums[i]) == list.end()
            ){
                list.push_back(nums[i]);
            }
        }
        return list;
    }
};
