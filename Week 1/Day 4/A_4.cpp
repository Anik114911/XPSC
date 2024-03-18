// @problem Link
// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

long maximumSumSubarray(int K, vector<int> &Arr , int N){
    long long r = 0,l = 0,sum = 0,mx = INT_MIN;
    while(r < N){
        sum += Arr[r];
        long long dif = (r - l) + 1;
        if(dif == K){
            mx = max(mx,sum);
            sum -= Arr[l];
            l++;
            r++;
        }
        else r++;
    }
    return mx;
}