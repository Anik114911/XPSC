#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long 
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define e4 int32_t main()
#define Infinite void
#define PI 2.0 * acos(0.0)
using namespace std;
#ifdef LOKAL
#include "Debug_Template.h"
#else
#define HERE
#define debug(args...) 
#endif 
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

Infinite Void() {
    ll n,c,d;
    cin >> n >> c >> d;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end(),greater<ll>());
    ll sum = 0;
    for(ll i=0;i<n && i<d;i++) sum += a[i];
    if(sum >= c){
        cout << "Infinity" << endl;
        return;
    }
    sum = 0;
    for(ll i=0;i<d;i++) sum += a[0]; 
    if(sum < c){
        cout << "Impossible" << endl;
        return;
    }
    auto ok = [&](ll mid){
        mid++;
        ll days = d;
        if(mid >= n){
            ll res = 0;
            ll times = d / mid;
            ll rem = d % mid;
            for(ll i=0;i<n && i<d;i++){
                res += (a[i] * times);
            }
            days -= (n * times);
            for(ll i=0;i<rem && i<days && i<n;i++){
                res += a[i];
            }
            return res >= c;
        }
        else{
            ll res = 0;
            ll times = d / mid;
            ll rem = d % mid;
            for(ll i=0;i<mid && i<d;i++){
                res += (a[i] * times);
            }
            days -= (mid * times);
            for(ll i=0;i<rem && i<days && i<n;i++){
                res += a[i];
            }
            return res >= c;
        }
    };
    ll l=0,r=1e18,mid,ans = -1;
    while(l <= r){
        mid = (l + r) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    if(ans == -1) cout << "Impossible" << endl;
    else cout << ans << endl;
}
e4{
    fst ll t = 1;
    cin >> t;
    for (ll i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
