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
#define lcm(a, b) ((a * b) / gcd(a, b))
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

Infinite Void(){
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    vector<ll> v(31,0);
    for(ll i=0;i<n;i++){
        ll j = 30;
        while(j >= 0){
            ll check = (1 << j);
            ll off = (a[i] & check);
            if(!off){
                v[j]++;
            }
            j--;
        }
    }
    ll ans = 0;
    for(ll i = 30; i >= 0; --i) {
        if(v[i] <= k) {
            k -= v[i];
            ans += (1 << i);
        }
    }
    cout << ans << endl;
}
e4{
    fst ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; ++i)
    {
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}