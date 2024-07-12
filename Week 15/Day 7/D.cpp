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
    string s;
    cin >> s;
    map<char,int> mp;
    for(int i=0;i<s.length();i++) mp[s[i]]++;
    char ch;
    int mx = 0;
    for(auto [x,y] : mp){
        if(y > mx){
            mx = y;
            ch = x;
        }
    }
    int cnt = 0;
    int len = s.length();
    if(mx == 1){
        while(len > 1){
            cnt++;
            len /= 2;
        }
        cout << cnt << endl;
        return;
    }
    int mn = INT_MAX;
    for(int i=0;i<26;i++){
        ch = i + 'a';
        if(mp[ch] == 0) continue;
        cnt = 0;
        string tmp = s;
        len = tmp.length();
        while(len > mp[ch]){
            cnt++;
            string st;
            bool ok = false;
            for(int i=0;i<tmp.length();i++){
                if(tmp[i] == ch){
                    st.push_back(tmp[i]);
                    ok = false;
                }
                else if(ok){
                    st.push_back(tmp[i]);
                    ok = false;
                }
                else ok = true;
            }
            if(tmp.length() == st.length()){
                cnt--;
                break;
            }
            tmp = st;
            len = st.length();
        }
        mn = min(mn,cnt);
    }
    cout << mn << endl;
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
