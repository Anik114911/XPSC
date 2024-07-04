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
    ll d;
    cin >> d;
    auto isPrime = [&](ll val){
        for(ll i=2;i*i<=val;i++){
            if(val % i == 0) return false;
        }
        return true;
    };
    auto find = [&] (ll l){
        for(ll i=l;i<=l+100;i++){
            if(isPrime(i)){
                return i;
            }
        }
        return 1LL;
    };
    ll a,b;
    a = find(d+1);
    b = find(a+d);
    cout << lcm(a,b) << endl;
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
