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
    vector<pair<ll,ll>> v(n);
    map<ll,ll> mp,mp2;
    ll num_x = 0, num_y = 0;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin >> x >> y;
        v[i] = {x,y};
        if(y == 0){
            num_x++;
            mp[x]++;
        }
        else{
            num_y++;
            mp2[x]++;
        }
    }
    ll cnt = 0;
    for(ll i=0;i<n;i++){
        if(v[i].second == 1 && mp[v[i].first] > 0){
            cnt += num_x - 1;
            cnt += num_y - 1;
        }
        if(v[i].second == 1 && mp[v[i].first-1] > 0 && mp[v[i].first+1] > 0) cnt++;
        if(v[i].second == 1 && mp[v[i].first+1] > 0 && mp2[v[i].first+2] > 0) cnt++;
    }
    cout << cnt << endl;
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
