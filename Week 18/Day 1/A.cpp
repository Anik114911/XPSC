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
    vector<int> a(n),v;
    int idx = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] & 1) idx = i+1;
    }
    if(!idx){
        no return;
    }
    for(int i=0;i<n;i++){
        if(!(a[i] & 1)) v.push_back(i+1);
    }
    if(v.size() >= 2){
        yes cout << idx << " " << v[0] << " " << v[1] << endl;
        return;
    }
    v.clear();
    for(int i=0;i<n;i++){
        if(a[i] & 1) v.push_back(i+1);
    }
    if(v.size() >= 3){
        yes cout << v[0] << " " << v[1] << " " << v[2] << endl;
        return;
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
