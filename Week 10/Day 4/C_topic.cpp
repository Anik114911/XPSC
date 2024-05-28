#include<bits/stdc++.h>
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
    ll n; cin >> n;
    vector<ll> a(n);
    pbds <ll> p;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        p.insert(a[i]);
    }
    ll cnt = 0;
    for(ll i=0;i<n;i++){
        cnt += p.order_of_key(a[i]);
        p.erase(a[i]);
    }
    cout << cnt << endl;
}
e4{
    fst int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        limitless();
    }
    return 0;
}
