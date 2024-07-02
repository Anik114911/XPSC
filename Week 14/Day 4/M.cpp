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
    int n;
    cin >> n;
    vector<int> a(n),mp(28,0);
    for(int i=0;i<n;i++){
        cin >> a[i];
        a[i] %= 10;
        mp[a[i]]++;
    }
    bool ok = false;
    for(int i=0;i<=3;i++){
        if(mp[i] == 0) continue;
        for(int j=0;j<=3;j++){
            if(mp[j] == 0) continue;
            int sum = i + j;
            int need = 3 - sum;
            if(need < 0) break;
            if(mp[need] == 0) continue;
            mp[i]--;
            mp[j]--;
            mp[need]--;
            if(mp[i] >= 0 && mp[j] >= 0 && mp[need] >= 0) ok = true;
            mp[i]++;
            mp[j]++;
            mp[need]++;
        }
    }
    for(int i=0;i<=13;i++){
        if(mp[i] == 0) continue;
        for(int j=0;j<=13;j++){
            if(mp[j] == 0) continue;
            int sum = i + j;
            int need = 13 - sum;
            if(need < 0) break;
            if(mp[need] == 0) continue;
            mp[i]--;
            mp[j]--;
            mp[need]--;
            if(mp[i] >= 0 && mp[j] >= 0 && mp[need] >= 0) ok = true;
            mp[i]++;
            mp[j]++;
            mp[need]++;
        }
    }
    for(int i=0;i<=23;i++){
        if(mp[i] == 0) continue;
        for(int j=0;j<=23;j++){
            if(mp[j] == 0) continue;
            int sum = i + j;
            int need = 23 - sum;
            if(need < 0) break;
            if(mp[need] == 0) continue;
            mp[i]--;
            mp[j]--;
            mp[need]--;
            if(mp[i] >= 0 && mp[j] >= 0 && mp[need] >= 0) ok = true;
            mp[i]++;
            mp[j]++;
            mp[need]++;
        }
    }
    if(ok) yes 
    else no 
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
