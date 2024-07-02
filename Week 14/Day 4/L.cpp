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
    ll n,m,h;
    cin >> n >> m >> h;
    ll position = 1;
    for(ll i=0;i<n;i++){
        vector<ll> a(m);
        for(ll j=0;j<m;j++){
            cin >> a[j];
        }
        sort(a.begin(),a.end());
        ll sum = 0,solve = 0,penalty = 0;
        for(ll j=0;j<m;j++){
            if(sum + a[j] <= h){
                solve++;
                sum += a[j];
                penalty += sum;
            }
            else break;
        }
        ll rod_solve,rod_penalty;
        if(i == 0){
            rod_solve = solve;
            rod_penalty = penalty;
        }
        else{
            if(rod_solve < solve) position++;
            else if(rod_solve == solve && rod_penalty > penalty) position++;
        }
    }
    cout << position << endl;
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
