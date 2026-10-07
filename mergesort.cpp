void merge(vector<int> &arr, int low, int mid, int high){
    //assuming two array are sorted and we have to convert it into one big sorted array
    //sorting by parts 
    //when one part done finish the other one into a temp array
    //put the temp into original
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high){
        if (arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;   
        }
        while(left <= mid ){
            temp.push_back(arr[left]);
            left++;
        }
        while(right <= high){
           temp.push_back(arr[right]);
            right++; 
        }
    }
    for (int i = low; i <= high ; i++){
        arr[i] = temp[i-low];
    }
}
void mergesort(vector<int> &arr, int low, int high){
    int mid = (high+low)/2;
    if(low == high)  {return;}
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

void mergesort_array(vector<int> &arr){
    int n = arr.size();
    mergesort(arr,0,n-1);
}
