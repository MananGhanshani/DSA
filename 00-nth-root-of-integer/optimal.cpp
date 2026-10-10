int bs (int n , int m){
    int low = 1;
    int high = m;
    while ( low <= high ){
        long long mid = low + (high - low)/2;
        int i = 0;
        long long a = 1;
        while (i < n){
            a *= mid;
            if (a > m) break;
            i++;
        }
        if ( a == m ){
            return mid;
        }
        else if( a < m ){
            low = mid + 1;
        }
        else if ( a > m ){
            high = mid - 1;
        }
    }
    return -1;
}
class Solution {
public:
    int nthRoot(int n, int m) {
        return bs( n , m);
    }
};
