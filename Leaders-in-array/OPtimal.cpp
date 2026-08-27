class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n = nums.size();
        vector<int> leader;   
        int maxi = INT_MIN; 
        for(int i = n-1; i>=0 ; i--){
            if( nums[i] > maxi){
                leader.push_back(nums[i]);
            }
            maxi = max(maxi,nums[i]);
        }
        reverse(leader.begin(),leader.end());
        /* int m = leader.size();
        int a = 0;
        int b = m;
        while (a < m/2 ){
            swap(leader[a], leader[b-1]);
            a++;
            b--;
        } */
        return leader;
    }
};
