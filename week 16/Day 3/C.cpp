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
    string s;
    cin >> n >> s;
    vector<int> a(n),v;
    int i = 0;
    while(i < n){
        a[i] = s[i] - '0';
        i++;
    }
    if(a[0] != 9){
        for(i=0;i<n;i++){
            cout << 9 - a[i];
        }
        cout << endl;
        return;
    }
    int count = 0;
    for(i=n-1;i>=0;i--){
        a[i] += count;
        if(a[i] == 1){
            v.push_back(0);
            count = 0;
        }
        else if(a[i] == 0){
            v.push_back(1);
            count = 0;
        }
        else {
            v.push_back(11 - a[i]);
            count = 1;
        }
    }
    reverse(v.begin(),v.end());
    for(auto x : v) cout << x;
    cout << endl;
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
