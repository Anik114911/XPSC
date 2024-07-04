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
    int a,b;
    cin >> a >> b;
    auto div = [&](int val){
        for(int i=2;i*i<=val;i++){
            if(val % i == 0) return i;
        }
        return 0;
    };
    if(b <= 3) cout << "-1" << endl;
    else if(a == b){
        if(b != 2 && (b % 2 == 0)){
            cout << (b / 2) << " " << (b / 2) << endl;
            return;
        }
        int d = div(b);
        if(!d) cout << "-1" << endl;
        else{
            ll res = b / d;
            cout << d << " " << b - d << endl;
        }
    }
    else if(b % 2 == 0){
        if(b != 2) cout << (b / 2) << " " << (b / 2) << endl;
        else cout << "-1" << endl;
    }
    else{
        b--;
        if(b != 2) cout << (b / 2) << " " << (b / 2) << endl;
        else cout << "-1" << endl;
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
