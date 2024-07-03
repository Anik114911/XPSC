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
    ll n;
    cin >> n;
    vector<ll> a(n),b(n),c(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    for(ll i=0;i<n;i++) cin >> b[i];
    for(ll i=0;i<n;i++){
        c[i] = a[i] - b[i];
    }
    ll mx = INT_MIN;
    for(ll i=0;i<n;i++){
        mx = max(mx,c[i]);
    }
    vector<ll> v;
    for(ll i=0;i<n;i++){
        if(c[i] == mx){
            v.push_back(i+1);
        }
    }
    sort(v.begin(),v.end());
    cout << v.size() << endl;
    for(auto x : v) cout << x << " ";
    cout << endl;
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
