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
    ll n,k;
    cin >> n >> k;
    ll num = n + k - 1;
    ll sum = (num * (num + 1)) / 2;
    ll sub = ((k-1) * k) / 2;
    sum -= sub;
    ll l = k,r = num,mid,ans = 1e10,s;
    while(l <= r){
        mid = (l + r) / 2;
        s = (mid * (mid + 1)) / 2;
        s -= sub;
        ll rem = sum - s;
        ll dif = abs(rem - s);
        if(s >= rem){
            r = mid - 1;
            ans = min(ans,dif);
            if(dif < mid) break;
        }
        else{
            l = mid + 1;
            ans = min(ans,dif);
            if(dif < mid) break;
        }
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
