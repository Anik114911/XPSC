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
    string s,t,st;
    cin >> s >> t;
    if(s == t){
        cout << s << endl;
        return;
    }
    auto ok = [&](string s, string t){
        int i=0,j=0;
        while(true){
            if(i < s.length() && j < t.length()){
                if(s[i] == t[j]){
                    st.push_back(s[i]);
                    i++;
                    j++;
                }
                else return false;
            }
            else if(i < s.length()) j = 0;
            else if(j < t.length()) i = 0;
            else break;
        }
        return true;
    };
    if(s.length() < t.length()){
        st.clear();
        if(ok(s,t)){
            cout << st << endl;
            return;
        }
        cout << "-1" << endl;
    }
    else{
        st.clear();
        if(ok(t,s)){
            cout << st << endl;
            return;
        }
        cout << "-1" << endl;
    }
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
