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

bool cmp(pair<ll,ll> a, pair<ll,ll> b){
    if(a.second == b.second) return a.first <= b.first;
    return a.second <= b.second;
}
Infinite Void() {

    // This is the farthest i have ever been pushed
    
    ll n,m;
    cin >> n;
    vector<ll> a(n+1),dis(n+1,n);
    vector<pair<ll,ll>> v,res;
    map<ll,vector<ll>> mv;
    map<ll,ll> mp,sdp;
    for(ll i=1;i<=n;i++){
        cin >> a[i];
        mv[a[i]].push_back(i);
    }
    auto distinct = [&](ll l, ll r, ll m, vector<ll> &dis){
        while(l >= 1 && r <= n){
            dis[r] = min(min(a[l],a[r]),m);
            m = dis[r];
            l--;
            r++;
        }
        return;
    };
    if(n % 2){
        m = a[(n/2)+1];
        dis[(n/2)+1] = m;
        ll l = n/2,r=(n/2)+2;
        distinct(l,r,m,dis);
    }
    else{
        m = min(a[n/2],a[(n/2)+1]);
        dis[(n/2)+1] = m;
        ll l = (n/2)-1,r=(n/2)+2;
        distinct(l,r,m,dis);
    }
    for(ll i=1;i<=n;i++){
        ll mx = INT_MIN;
        for(ll j=1;j<mv[a[i]].size();j++){
            ll dif = abs(mv[a[i]][j] - mv[a[i]][j-1]);
            mx = max(mx,dif);
        }
        if(mx !=INT_MIN){
            if(a[i] != a[n]) mx = max(mx,abs(n-mv[a[i]][mv[a[i]].size()-1])+1);
            if(a[i] != a[0]) mx = max(mx,mv[a[i]][0]);
            mp[a[i]] = mx;
        }
        else mp[a[i]] = n;
        if(sdp.count(a[i])) mp[a[i]] = sdp[a[i]];
        else sdp[a[i]] = mp[a[i]];
        mv[a[i]].clear();
    }
    for(auto [x,y] : mp) v.push_back({x,y});
    sort(v.begin(),v.end(),cmp);
    res.push_back(v[0]);
    for(ll i=1;i<v.size();i++){
        if(v[i].second != res[res.size()-1].second) res.push_back(v[i]);
    }
    ll j = 1, i = 0, ans = -1;
    while(i < res.size() && j <= n){
        if(j < res[i].second){
            if((n/2)+1 <= j && ans != -1){
                cout << min(ans,dis[j]) << " ";
                ans = min(ans,dis[j]);
            }
            else if((n/2)+1 <= j){
                cout << dis[j] << " ";
                ans = dis[j];
            }
            else cout << ans << " ";
        }
        else if(j >= res[i].second){
            if(ans == -1) ans = res[i].first;
            else ans = min(ans,res[i].first);
            if((n/2)+1 <= j){
                cout << min(dis[j],ans) << " ";
                ans = min(dis[j],ans);
            }
            else cout << ans << " ";
            i++;
        }
        j++;
    }
    while(j <= n){
        cout << ans << " ";
        j++;
    }
    cout << endl;
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
