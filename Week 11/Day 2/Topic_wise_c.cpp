#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long 
#define endl '\n'
#define e4 int main()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define PI 2.0 * acos(0.0)
using namespace std;
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag,\
tree_order_statistics_node_update>;
void limitless(){
    
}
e4{
    fst ll n,q;
    cin >> n >> q;
    vector <ll> a(n),v(n+1);
    for(ll i=0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end(),greater<ll>());
    while(q--){
        ll l,r;
        cin >> l >> r;
        l--;
        r--;
        v[r+1]--;
        v[l]++;
    }
    for(ll i=1;i<n;i++){
        v[i] += v[i-1];
    } 
    sort(v.begin(),v.end(),greater<ll>());
    ll sum = 0;
    for(ll i=0;i<n;i++){
        sum += (a[i] * v[i]);
    }
    cout << sum << endl;
    return 0;
}
