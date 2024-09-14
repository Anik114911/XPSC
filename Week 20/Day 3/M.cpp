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
    vector<ll> a(n+1);
    for(ll i=1;i<=n;i++) cin >> a[i];
    vector<ll> pre(n+1),suf(n+1);
    for(ll i=1;i<=n;i++){
        if(i == 1) pre[i] = 0;
        else if(i == 2) pre[i] = 1;
        else{
            if(abs(a[i] - a[i-1]) < abs(a[i-1] - a[i-2])) pre[i] = 1;
            else pre[i] = abs(a[i] - a[i-1]);
        }
    }
    for(ll i=n;i>=1;i--){
        if(i == n) suf[i] = 0;
        else if(i == n-1) suf[i] = 1;
        else{
            if(abs(a[i] - a[i+1]) < abs(a[i+1] - a[i+2])) suf[i] = 1;
            else suf[i] = abs(a[i] - a[i+1]);
        }
    }
    for(ll i=2;i<=n;i++) pre[i] += pre[i-1];
    for(ll i=n-1;i>=1;i--) suf[i] += suf[i+1];
    ll q;
    cin >> q;
    while(q--){
        ll x,y;
        cin >> x >> y;
        if(x < y) cout << pre[y] - pre[x] << endl; 
        else cout << suf[y] - suf[x] << endl;
    }
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
