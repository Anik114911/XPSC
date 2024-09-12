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
    ll n,m,k;
    cin >> n >> m >> k;
    vector<ll> a(n),b(m);
    ll mn_a = INT_MAX, mx_a = INT_MIN;
    ll mn_b = INT_MAX, mx_b = INT_MIN;
    ll sum_a = 0;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        mn_a = min(mn_a,a[i]);
        mx_a = max(mx_a,a[i]);
        sum_a += a[i];
    }
    for(ll i=0;i<m;i++){
        cin >> b[i];
        mn_b = min(mn_b,b[i]);
        mx_b = max(mx_b,b[i]);
    }
    if(mn_a < mx_b){
        sum_a -= mn_a;
        sum_a += mx_b;
        mx_a = max(mx_a,mx_b);
        mn_b = min(mn_b,mn_a);
    }
    if(k % 2){
        cout << sum_a << endl;
        return;
    }
    if(mn_b < mx_a){
        sum_a -= mx_a;
        sum_a += mn_b;
    }
    cout << sum_a << endl;
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
