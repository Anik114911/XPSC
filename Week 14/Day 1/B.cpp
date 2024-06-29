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
    ll x,y,k;
    cin >> x >> y >> k;
    while(k > 0){
        x++;
        k--;
        while(x % y == 0){
            x /= y;
        }
        if(x < y) break;
        ll r = x / y;
        r++;
        ll ans = r * y;
        ll dif = ans - x;
        if(dif <= k){
            x = ans - 1;
            k -= (dif - 1);
        }
        else{
            x += k;
            break;
        }
    }
    if(x < y && k > 0){
        ll dif = y - x;
        if(k < dif){
            x += k;
        }
        else{
            k -= dif;
            x = 1;
            dif = y - x;
            if(k == 0) x = 1;
            else if(k % dif == 0){
                x = 1;
            }
            else{
                k %= dif;
                x += k; 
            }
        }
    }
    cout << x << endl;
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