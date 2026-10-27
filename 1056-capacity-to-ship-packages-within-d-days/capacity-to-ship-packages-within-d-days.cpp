int days(vector<int>& arr, int number){
    int days = 1;
    int temp = 0;
    for (int i = 0; i < arr.size(); i++){
        if(temp + arr[i] > number){
            days++;
            temp = arr[i];
        }
        else{
            temp += arr[i];
        }
    }
    return days;
}
int bs(vector<int>& arr, int d){
    int low = *max_element(arr.begin(), arr.end());
    int high = 0;
    for (int i : arr){
        high += i;
    }
    while (low <= high){
        int mid = (low + high )/2;
        if ( days(arr, mid) <= d){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
     //weights [1 2 3 4 5 6 7 8 9 10]
     //max days 5  
     //if i take capacity 9 (1) (2 )(3 )(4) (5) (6) (7) (8) (9) cant fit 10  
     //if i take 10 (1 2 3 4 ) (5) (6) (7) (8) (9) (10) = 7days 
     //if i take s= 55 (1 2 3 4 5 6 7 8 9 10 ) = 1 day 
     // start from maximum element end at sum of array
     //start not possible end possible
     return bs(weights, days);
    }
};