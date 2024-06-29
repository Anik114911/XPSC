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
    int n;
    cin >> n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    int am=0,bm=0,mx=0,sm=0,sp=0;
    for(int i=0;i<n;i++){
        mx = max(a[i],b[i]);
        if(mx == 0){
            am += 0;
        }
        else if(mx == 1){
            if(a[i] == b[i]){
                sp++;
            }
            else {
                if(a[i] == 1) am++;
                else bm++;
            }
        }
        else {
            sm++;
        }
    }
    while(sp > 0){
        if(am >= bm){
            bm++;
            sp--;
        }
        else{
            am++;
            sp--;
        }
    }
    while(sm > 0){
        if(am >= bm){
            am--;
            sm--;
        }
        else{
            bm--;
            sm--;
        }
    }
    cout << min(am,bm) << endl;
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