vector<int> mergesort(vector<int> &a1 ,vector<int> &a2){
    int n1 = a1.size();
    int n2 = a2.size();
    int i = 0;
    int j = 0;
    vector<int> temp;
    while(i < n1 && j < n2){
        if (a1[i] > a2[j]){
            temp.push_back(a2[j]); 
            j++;}
        else{temp.push_back(a1[i]);
            i++;}
    }
    while (i < n1){
        temp.push_back(a1[i]);
        i++;
    }
    while (j < n2){
        temp.push_back(a2[j]);
        j++;
    }
    return temp;
}
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans = mergesort(nums1, nums2);
        int n = ans.size();
        if ( n % 2 == 0){
            return ((double)ans[n/2] + (double)ans[(n/2-1)]) /2.0;
        }
        else return double(ans[n/2]);
    }
};
