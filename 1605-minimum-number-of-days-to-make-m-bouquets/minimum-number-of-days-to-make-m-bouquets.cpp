int bonquet_for_e(vector<int>& arr, int e, int g){
    int bonquet = 0;
    int cnt = 0;
    for ( int i = 0; i < arr.size(); i++){
        if (arr[i] <= e){
            cnt++;
            if( cnt == g){
                bonquet++;
                cnt = 0;
            }
        }
        else{
            cnt = 0;
        }
    }
    return bonquet;
}
int bs (vector<int> &arr, int b, int g){
    int maxi = *max_element(arr.begin(), arr.end());
    int mini = *min_element(arr.begin(), arr.end());
    while ( mini <= maxi){
        int mid = (mini+maxi)/2;
        if (bonquet_for_e(arr, mid ,g) >= b){
            maxi = mid - 1;
        }
        else {
            mini = mid + 1;
        }
    }
    return mini;
}
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ( 1LL * m * k > bloomDay.size() ) {
            return -1;
        }
        return bs(bloomDay, m , k);
    }
};