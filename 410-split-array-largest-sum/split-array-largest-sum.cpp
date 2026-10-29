int calc_students(vector<int>& arr, int max_pages){
    int std = 1;
    int pg_std = 0;
    //to place first student 
    for (int i = 0 ; i < arr.size() ; i++){
        //if current position is less than allowed
        //add this position and move on try next
        if (pg_std + arr[i] <= max_pages ){
            pg_std += arr[i];
        }
        //maximum reached close for this student and take for other now
        else{
            std++;
            pg_std = arr[i];
        }
    }
    return std;
} 
int bs ( vector<int> &nums, int k ){
    int low = *max_element(nums.begin(), nums.end());
    int high = 0;
    for ( int i : nums){
        high += i;
    }
    while ( low <= high ){
        int mid = (low + high)/2;
        int no_student = calc_students(nums, mid);
        if ( no_student > k){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return low;
}
class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        //each student gets atleast one book
        //each book should be aclocated to 1 student
        //book allocation should be contigious
        //maximum no of pages allocated to a student is minimum
        // split array into k parts so need k-1 bars 
        //maximum sum of each section to be made minimum
        //impossible cases when no of pages less than no of students

        //no of minimum pages to each is the maximum element of array if number of studnet ignored
        //no of maximum pages to each is sum of total array if number of studnets ignored
        //make a funtion in which we can know the number of students found for a minimum pages integer
        //check if the for that minimum pages students our given studnets is equal if yes try less pages if no then increase pages
        if ( nums.size() < k ){
            return -1;
        }
        return bs(nums, k);
    }
};