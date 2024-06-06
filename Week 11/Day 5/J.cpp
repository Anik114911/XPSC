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
#define lcm(a, b) ((a * b) / gcd(a, b))
#define e4 int32_t main()
#define PI 2.0 * acos(0.0)
using namespace std;
#ifdef LOKAL
#include "Debug_Template.h"
#else
#define HERE
#define debug(args...) 
#endif 
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag,\
tree_order_statistics_node_update>;
void limitless(){
    ll n,k;
    cin >> n >> k;
    vector<ll> a(n);
    ll mn = 1e18,r;
    for(ll i=0;i<n;i++) cin >> a[i];
    if(k >= 3){
        cout << '0' << endl;
        return;
    }
    sort(a.begin(),a.end());
    mn = a[0];
    for(ll i=1;i<n;i++){
        mn = min(mn,(a[i] - a[i-1]));
    }
    if(k == 1){
        cout << mn << endl;
        return;
    }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<i;j++){
            ll dif = a[i] - a[j];
            ll idx = lower_bound(a.begin(),a.end(),dif) - a.begin();
            if(idx < n) mn = min(mn,a[idx] - dif);
            if(idx > 0) mn = min(mn,dif - a[idx-1]);
        }
    }
    cout << mn << endl;
}
e4{
    fst int t = 1;
    cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        // cout << "Case " << i << ": ";
        limitless();
    }
    return 0;
}