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
ll n,m;
vector<pair<ll,ll>> v;
map<ll,ll> dp;
ll find(ll val){
    if(dp.count(val)) return dp[val];
    ll l=0,r=v.size()-1,mid,idx = -1;
    while(l <= r){
        mid = (l + r) / 2;
        if(v[mid].second <= val){
            r = mid - 1;
            idx = mid;
        }
        else l = mid + 1;
    }
    if(idx == -1){
        return dp[val] = 0;
    }
    ll rem = val - v[idx].second;
    ll re = rem / v[idx].first;
    re++;
    ll ans = val - (re * v[idx].first);
    return dp[val] = (re * 2) + find(ans);
}
Infinite Void() {
    cin >> n >> m;
    vector<ll> a(n),b(n),c(m);
    for(ll i=0;i<n;i++) cin >> a[i];
    for(ll i=0;i<n;i++) cin >> b[i];
    for(ll i=0;i<m;i++) cin >> c[i];
    for(ll i=0;i<n;i++){
        v.push_back({a[i]-b[i],a[i]});
    }
    sort(v.begin(),v.end());
    ll cnt = 0;
    vector<pair<ll,ll>> vec;
    for(ll i=0;i<n;i++){
        if(i == 0){
            vec.push_back({v[i].first,v[i].second});
        }
        else if(vec.back().second > v[i].second){
            vec.push_back({v[i].first,v[i].second});
        }
    }
    v = vec;
    ll ans = 0;
    for(ll i=0;i<m;i++){
        ans += find(c[i]);
    }
    cout << ans << endl;
}
e4{
    fst ll t = 1;
    // cin >> t;
    for (ll i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
