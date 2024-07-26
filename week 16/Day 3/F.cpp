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
    ll res = 0,cnt = 0;
    ll l=0,r=1e10,mid,ans=0;
    while(l <= r){
        mid = (l + r) / 2;
        res = (mid * (mid + 1)) / 2;
        if(res >= n){
            cnt = mid;
            ans = res;
            r = mid - 1;
        }
        else if(res < n){
            l = mid + 1;
        }
    }
    if(ans - n == 0){
        cout << cnt + 1 << endl;
        return;
    }
    else cnt--;
    ans = (cnt * (cnt + 1)) / 2;
    cnt += (n - ans) + 1;
    cout << cnt << endl;
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
