//dosent work
bool can_we_place(vector<int>& arr, int dist, int cows){
    // min distance 4  
    // previous index is 0
    // if arr [1] is 4 then cnt++
    // if arr[1] is 1 not possible to put so next index 
    int cnt_cows = 1;
    int last = arr[0];
    for ( int i = 0; i < arr.size(); i++){
        if ( arr[i] - last >= dist ){
            cnt_cows++;
            last = arr[i];
        }
    }
    // total placed cows is possible then true else false
    if ( cnt_cows >= cows ){
        return true;
    }
    else {
        return false;
    };

    return false;
}
class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        //distance array [ 0 3 4 7 10 9 ] no of cows are m
        //sort it first  [ 0 3 4 7 9 10 ]
        //place first one at first index and make count 1
        // if we take min distance to be 1 and put it in fun to check
        sort( position.begin(), position.end());
        int n = position.size();
        int max = position[n-1];
        int min = position[0];
        for ( int i = 1  ; i <= max-min; i++){
            if ( can_we_place(position, i , m)){
                continue;
            }
            else return i-1;
        }
    return max-min;
    }
};
