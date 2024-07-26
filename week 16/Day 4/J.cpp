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
    int n,m,k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    vector<int> l;
    for(int i=n-1;i>=0;i--){
        if(s[i] == 'L') l.push_back(i);
    }
    int i = 0;
    if(m > n){
        yes return;
    }
    else if(l.size() > 0){
        int next = l[l.size()-1];
        if(i + m - 1 >= next) i = next;
        else i += m-1;
    }
    else i += m-1;
    for(i;i<n;i++){
        if(s[i] == 'L'){
            l.pop_back();
            if(i+m >= n){
                yes return;
            }
            else if(l.size() > 0){
                int next = l[l.size()-1];
                if(i + m >= next) i = next - 1;
                else i += m-1;
            }
            else{
                i += m-1;
            }
        }
        else if(s[i] == 'W'){
            int j = i;
            while(j < n){
                if(s[j] == 'L' && k >= 0){
                    i = j-1;
                    break;
                }
                else if(s[j] == 'C' || k <= 0){
                    no return;
                }
                j++;
                k--;
            }
            if(j >= n){
                yes return;
            }
        }
        else{
            no return;
        }
    } yes 
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
