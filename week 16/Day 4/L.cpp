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
    int n,ci,cj,qi,qj,ki,kj;
    cin >> n;
    cin >> qi >> qj >> ki >> kj >> ci >> cj;
    if(ki < qi){
        if(kj < qj){
            if(ci < qi && cj < qj){
                yes return;
            }
            else{
                no return;
            }
        }
        else{
            if(ci < qi && cj > qj){
                yes return;
            }
            else{
                no return;
            }
        }
    }
    else{
        if(kj < qj){
            if(ci > qi && cj < qj){
                yes return;
            }
            else{
                no return;
            }
        }
        else{
            if(ci > qi && cj > qj){
                yes return;
            }
            else{
                no return;
            }
        }
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
