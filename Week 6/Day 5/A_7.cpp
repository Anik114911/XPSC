#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    auto ok = [&](int mid){
        int prev = a[0];
        int cnt = 1;
        if((a[n-1] - a[0]) < mid) return false;
        for(int i=1;i<n;i++){
            if((a[i] - prev) >= mid){
                cnt++;
                prev = a[i];
            }
        }
        return cnt >= k;
    };
    int l=0,r=1e9,mid,ans;
    while(l <= r){
        mid = (l + r) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}
