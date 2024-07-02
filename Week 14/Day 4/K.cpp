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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int idx = -1;
    vector<int> a;
    for(int i=0;i<n;i++){
        if(s[i] == '1'){
            idx = i;
        }
    }
    if(idx == -1){
        k++;
        int res = n / k;
        if(n % k) res++;
        cout << res << endl;
        return;
    }
    int cnt = 0,c = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '1'){
            i += k;
            cnt = 0;
        }
        else{
            cnt++;
            if(cnt == k+1){
                c++;
                cnt = 0;
            }
        }
    }
    if(cnt > 0) c++;
    cout << c << endl;
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
