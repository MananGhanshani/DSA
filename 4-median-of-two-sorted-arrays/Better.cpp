class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) { 
        int n = a.size() + b.size();
        int n1 = a.size(), n2 = b.size();
        int i = 0, j = 0;
        int ind1el = -1, ind2el = -1;
        int ind2 = n/2;
        int ind1 = (n-1)/2;
        int cnt = 0 ;
        while( i < n1 && j < n2){
            if (a[i] < b[j]){
                if (cnt == ind1 ) ind1el = a[i];
                if (cnt == ind2 ) ind2el = a[i];
                i++;
            }
            else{
                if (cnt == ind1 ) ind1el = b[j];
                if (cnt == ind2 ) ind2el = b[j];
                j++;
            }
           cnt++; 
        }
        while ( i < n1 ){
            if (cnt == ind1 ) ind1el = a[i];
            if (cnt == ind2 ) ind2el = a[i];
            i++;
            cnt++;
        }
        while ( j < n2 ){
            if (cnt == ind1 ) ind1el = b[j];
            if (cnt == ind2 ) ind2el = b[j];
            j++;
            cnt++;
        }
        if ( n % 2 == 1 ){
            return double(ind2el);
        }
        else{
            return (double)(ind1el +ind2el) / 2.0;
        }
    }
};
