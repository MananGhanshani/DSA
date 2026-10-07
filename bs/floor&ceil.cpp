int lb = lower_bound(arr.begin(), arr.end(), n) - arr.begin();
int ceil = -1;
int floor = -1;
//if iterator present in range
if (lb < arr.size()){
    //ceil is lowerbound meaning same number or higher
    ceil = arr[lb];
    //if lowerbound is same as targer then floor is also lowerbound
    if(arr[lb] == n){
        floor = arr[lb];
    }
    //only if lowerbond is greater then zero then its floor is one less then lowerbound
    //and its not equal to lowerbound
    else if( lb > 0){
        floor = arr[lb-1];
    }
    //else meaning lowerbound is zero and its not equal to target so it dosent exist 
}
//if iterator is not in range meaning 
//its out of range lb = arr.size(); all elements are out of range 
//then ceil cant exist as no number grreater then or equal to target
//floor does exist as just lower number is in range
else{
    floor = arr[lb - 1];
}
