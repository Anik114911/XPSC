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

void build(ll start, ll end, ll idx, vector<ll> &a, vector<ll> &v){
    if(start > 1) v[idx] = a[end] - a[start-1];
    else v[idx] = a[end];
    if(start == end) return;
    ll left = (start+end) / 2;
    build(start,left,idx*2,a,v);
    build(left+1,end,idx*2+1,a,v);
}
ll sett(ll st, ll end, ll idx, ll val, vector<ll> &v, ll cng){
    if(st == idx && end == idx){
        ll dif = val - v[cng];
        v[cng] = val;
        return dif;
    }
    ll go = (st + end) / 2;
    ll change = 0;
    if(idx >= st && idx <= go) change = sett(st,go,idx,val,v,cng*2);
    else change = sett(go+1,end,idx,val,v,cng*2+1);
    v[cng] += change;
    return change;
}
ll sum(ll st, ll end, ll l, ll r, vector<ll> &v, ll idx){
    ll sum1=0,sum2=0;
    if(st >= l && end <= r) return v[idx];
    else if((l >= st && l <= end) || (r >= st && r <= end)){ 
        ll go = (st + end) / 2;
        sum1 = sum(st,go,l,r,v,idx*2);
        sum2 = sum(go+1,end,l,r,v,idx*2+1);
    }
    else return 0;
    return sum1 + sum2;
}
Infinite Void() {
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n+1);
    for(ll i=1;i<=n;i++){
        cin >> a[i];
        if(i > 1) a[i] += a[i-1];
    }
    ll res = 0;
    for(ll i=0;i<=n;i++){
        res = (1LL << i);
        if(res >= n){
            res *= 2;
            break;
        }
    }
    vector<ll> v(res,0);
    build(1,n,1,a,v);
    while(m--){
        ll x,y,z;
        cin >> x >> y >> z;
        if(x == 1) ll s = sett(1,n,y+1,z,v,1);
        else cout << sum(1,n,y+1,z,v,1) << endl;
    }
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
