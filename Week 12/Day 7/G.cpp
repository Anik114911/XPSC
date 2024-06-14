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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> v(26,0);
    for(int i=0;i<n;i++) v[s[i]-'a']++;
    vector<int> vec(v.begin(),v.end());
    string st;
    for(int i=0;i<26;i++){
        if(k >= v[i]){
            k -= v[i];
            vec[i] = 0;
        }
        else {
            vec[i] = v[i] - k;
            k = 0;
        }
    }
    for(int i=0;i<n;i++){
        if(v[s[i]-'a'] != vec[s[i]-'a']){
            vec[s[i]-'a']++;
        }
        else st.push_back(s[i]);
    }
    cout << st << endl;
}
e4{
    fst int t = 1;
    // cin >> t;
    for (int i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
