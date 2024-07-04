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
    auto prime = [&](ll n){
        if(n == 1) return false;
        for(ll i=2;i*i<=n;i++){
            if(n % i == 0) return false;
        }
        return true;
    };
    ll tmp = n,cnt = 0;
    if(prime(tmp)){
        cout << "1" << endl;
    }
    else if(tmp % 2 == 0){
        cout << "2" << endl;
    }
    else{
        if(prime(n-2)) cout << "2" << endl;
        else cout << "3" << endl;
    }
}
e4{
    fst int t = 1;
    // cin >> t;
    for (int i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
