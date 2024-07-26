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
    vector<ll> a(n-1),v;
    for(ll i=0;i<n-1;i++) cin >> a[i];
    v.push_back(a[0]);
    for(ll i=1;i<n-1;i++) v.push_back(a[i]-a[i-1]);
    map<ll,ll> mp;
    for(auto x : v) mp[x]++;
    ll sum = 0,cnt = 0;
    for(ll i=1;i<=n;i++){
        if(mp[i] == 0){
            if(i == a[0]) continue;
            else sum += i;
            cnt++;
        }
    }
    if(cnt == 1) yes 
    else if(mp[sum] && cnt == 2){
        if(sum > n) yes 
        else if(sum <= n && mp[sum] > 1) yes 
        else no 
    }  
    else no 
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