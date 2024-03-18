// @Problem Link
// https://www.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
    vector<long long> v;
    queue<long long> q;
    long long l = 0, r = 0,first = 0;
    while(r < N){
        if(A[r] < 0){
            q.push(A[r]);
        }
        if(r - l + 1 == K){
        if(!q.empty() && q.front() == A[l]){
            v.push_back(q.front());
            q.pop();
        }
        else if(!q.empty() && q.front() != A[l]){
            v.push_back(q.front());
        }
        else if(q.empty()){
            v.push_back(0);
        }
        l++;
        r++;
        }
        else r++;
    }
    return v;                                               
}