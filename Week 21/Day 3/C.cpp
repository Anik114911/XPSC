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
    ll n,m,q;
    cin >> n >> m >> q;
    vector<ll> a(m);
    for(ll i=0;i<m;i++) cin >> a[i];
    sort(a.begin(),a.end());
    while(q--){
        ll x;
        cin >> x;
        if(m == 1){
            if(x < a[0]) cout << a[0] - 1 << endl;
            else cout << n - a[0] << endl;
        }
        else if(x <= a[0]) cout << a[0] - 1 << endl;
        else if(x >= a[m-1]) cout << n - a[m-1] << endl;
        else{
            ll l = 0,r = m-1,mid,ans = -1;
            while(l <= r){
                mid = (l + r) / 2;
                if(a[mid] >= x){
                    r = mid - 1;
                    ans = mid;
                }
                else l = mid + 1;
            }
            ll res = a[ans] - a[ans-1] - 1;
            if(res % 2){
                res /= 2;
                res++;
            }
            else res /= 2;
            cout << res << endl;
        }
    }
}
e4{
    fst ll t = 1;
    cin >> t;
    for (ll i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
