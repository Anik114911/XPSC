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
    int n,mx=-1;
    cin >> n;
    vector<int> a(n);
    map<int,int> mp;
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        if(mp[a[i]] >= 2){
            mx = max(mx,i);
        }
    }
    if(mx == -1){
        int mn = INT_MAX,idx;
        for(int i=1;i<n;i++){
            int dif = abs(a[i] - a[i-1]);
            if(dif < mn){
                mn = dif;
                idx = i;
            }
        }
        cout << a[idx-1] << " ";
        for(int i=idx+1;i<n;i++) cout << a[i] << " ";
        for(int i=0;i<idx-1;i++) cout << a[i] << " ";
        cout << a[idx] << endl;
        return;
    }
    for(int i=mx;i<n;i++){
        cout << a[i] << " ";
    }
    for(int i=0;i<mx;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
e4{
    fst int t = 1;
    cin >> t;
    for (int i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
