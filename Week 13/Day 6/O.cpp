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
    ll h,n,sum=0;
    cin >> h >> n;
    vector<ll> a(n),c(n);
    for(ll i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    for(ll i=0;i<n;i++) cin >> c[i];
    auto ok = [&](ll mid){
        mid--;
        ll health = h;
        health -= sum;
        for(ll i=0;i<n;i++){
            ll r = mid / c[i];
            health -= (r * a[i]);
            if(health <= 0) return true;
        }
        return health <= 0;
    };
    ll l=1,r=4e10,mid,ans=-1;
    while(l <= r){
        mid = (l + r) / 2;
        if(ok(mid)){
            r = mid - 1;
            ans = mid;
        }
        else l = mid + 1;
    }
    cout << ans << endl;
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
