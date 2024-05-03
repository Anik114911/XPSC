#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n),b(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    for(ll i=0;i<n;i++) cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    auto ok = [&](ll m){
        ll cnt = 0;
        for(ll i=0;i<n;i++){
            ll l = 0,r = n - 1,mid,c = 0;
            while(l <= r){
                mid = (l + r) / 2;
                ll res = a[i] + b[mid];
                if(res <= m){
                    c = mid + 1;
                    l = mid + 1;
                }
                else r = mid - 1;
            }
            cnt += c;
        }
        return cnt >= k;
    };
    ll l=0,r=2e9,mid,ans;
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
