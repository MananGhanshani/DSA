class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        //112345
        long long n = nums.size();//6
        long long sum = 0;
        long long square = 0;
        long long ss= (n*(n+1))/2;//6*7)/2 
        long long sss = (n*(n+1)*(2*n +1))/6;

        for ( int x : nums){
            sum += x;
            square += (long long)x* x;
        }

        long long a = ss - sum;
        long long b = sss - square;
        long long c = (b)/a;
        long long m = (c+a)/2;
        long long r = (c-a)/2;
        return {(int)r,(int)m};
    }
};
