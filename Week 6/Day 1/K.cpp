#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long
#define endl '\n'
using namespace std;
int main(){
    fst
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    auto ok = [&](ll mid){
        ll res = 0;
        for(ll i=0;i<n;i++){
            res += (mid / a[i]);
            if(res >= k) return true;
        }
        return false;
    };
    ll l=1,r=1e18,mid,ans=-1;
    while(l <= r){
        mid = (l + r) / 2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans << endl;
    return 0;
}
