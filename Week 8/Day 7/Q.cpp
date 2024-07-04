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
    vector<ll> a,b;
    for(ll i=0;i<n;i++){
        ll x;
        cin >> x;
        if(i % 2) b.push_back(x);
        else a.push_back(x);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll greatest_a = a[0];
    ll greatest_b = b[0];
    for(ll i=1;i<a.size();i++){
        greatest_a = gcd(greatest_a,a[i]);
    }
    for(ll i=1;i<b.size();i++){
        greatest_b = gcd(greatest_b,b[i]);
    }
    if((greatest_a == 1 && greatest_b == 1) || (greatest_a == greatest_b)){
        cout << "0" << endl;
    }
    else if(greatest_a == 1 && greatest_b > 1){
        bool ok = true;
        for(ll i=0;i<a.size();i++){
            if(a[i] % greatest_b == 0){
                ok = false;
                break;
            }
        }
        if(ok) cout << greatest_b << endl;
        else cout << "0" << endl;
    }
    else if(greatest_a > 1 && greatest_b == 1){
        bool ok = true;
        for(ll i=0;i<b.size();i++){
            if(b[i] % greatest_a == 0){
                ok = false;
                break;
            }
        }
        if(ok) cout << greatest_a << endl;
        else cout << "0" << endl;
    }
    else{
        bool ok = true;
        for(ll i=0;i<a.size();i++){
            if(a[i] % greatest_b == 0){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << greatest_b << endl;
            return;
        }
        ok = true;
        for(ll i=0;i<b.size();i++){
            if(b[i] % greatest_a == 0){
                ok = false;
                break;
            }
        }
        if(ok) cout << greatest_a << endl;
        else cout << "0" << endl;
    }
}
e4{
    fst int t = 1;
    cin >> t;
    for (int i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
