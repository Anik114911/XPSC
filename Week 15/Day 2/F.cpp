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
    vector<int> a(n),v;
    bool ok = true;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
        if(a[i] > n) ok = false;
    }
    int cnt1 = 0, cnt2 = 0;
    for(int i=1;i<=n;i++){
        if(mp[i] == 0){
            cnt1++;
            v.push_back(i);
        }
        else if(mp[i] > 2){
            ok = false;
            break;
        }
        else if(mp[i] == 2){ 
            cnt2++;
            if(cnt2 > cnt1){
                ok = false;
                break;
            }
        }
    }
    if(!ok){
        no return;
    } yes 
    map<int,int> mp1;
    vector<int> v1(n,0),v2(n,0),vec;
    for(int i=0;i<n;i++){
        if(mp[a[i]] == 1){
            v1[i] = a[i];
            v2[i] = a[i];
        }
        else vec.push_back(a[i]);
    }
    sort(vec.begin(),vec.end());
    int j = 0;
    for(int i=0;i<vec.size();i+=2){
        mp1[vec[i]] = v[j];
        j++;
    }
    for(int i=0;i<n;i++){
        if(v1[i] == 0){
            if(mp[a[i]] == 2){
                v1[i] = a[i];
                v2[i] = mp1[a[i]];
                mp[a[i]]--;
            }
            else{
                v1[i] = mp1[a[i]];
                v2[i] = a[i];
            }
        }
    }
    for(auto x : v1) cout << x << " ";
    cout << endl;
    for(auto x : v2) cout << x << " ";
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
