#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    ll n,k;
    cin >> k >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    auto ok = [&](ll mid){
        ll sum = 0;
        for(ll i=0;i<n;i++){
            if(a[i] <= mid) sum += a[i];
            else sum += mid;
        }
        return (sum / mid) >= k;
    };
    ll l=0,r=1e11,mid,ans;
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
