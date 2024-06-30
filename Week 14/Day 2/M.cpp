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
    string s;
    cin >> s;
    if(n == 2){
        int r = s[0] - '0';
        r *= 10;
        r += s[1] - '0';
        cout << r << endl;
        return;
    }
    vector<ll> a;
    bool zero = false;
    for(ll i=0;i<n;i++){
        a.push_back(s[i]-'0');
        if(s[i]-'0' == 0) zero = true;
    }
    ll mn = LONG_MAX;
    if(n == 3 and zero){
        if(a[0] == 0 || a[2] == 0){
            cout << "0" << endl;
            return;
        }
        else{
            cout << min(a[0]+a[2],a[0]*a[2]) << endl;
            return;
        }
    }
    if(zero){
        cout << "0" << endl;
        return;
    }
    for(ll i=1;i<n;i++){
        ll val = a[i-1] * 10;
        val += a[i];
        ll ans = 0;
        for(ll j=0;j<n;j++){
            if(j == i-1){
                if(ans == 1 || val == 1) ans *= val;
                else ans += val;
            }
            else if(j == i) continue;
            else {
                if(ans == 1 || a[j] == 1) ans *= a[j];
                else ans += a[j];
            }
        }
        mn = min(ans,mn);
    }
    cout << mn << endl;
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
