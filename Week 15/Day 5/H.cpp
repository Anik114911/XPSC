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
    string a,b;
    cin >> a >> b;
    if(a[0] == b[0]){
        yes cout << a[0] << "*" << endl;
        return;
    }
    else if(a[a.size()-1] == b[b.size()-1]){
        yes cout << "*" << a[a.size()-1] << endl;
        return;
    }
    for(int i=0;i<a.size()-1;i++){
        for(int j=0;j<b.size()-1;j++){
            if(a[i] == b[j] && a[i+1] == b[j+1]){
                yes cout << "*" << a[i] << a[i+1] << "*" << endl;
                return;
            }
        }
    }
    no 
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

