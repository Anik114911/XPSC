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
int mn = INT_MAX;
void dfs(int root, vector<pair<int,int>> &tree, string &s, int cnt){
    pair<int,int> p = tree[root];
    int left = p.first;
    int right = p.second;
    if(left == 0 && right == 0){
        mn = min(cnt,mn);
        return;
    }
    if(s[root-1] != 'L'){
        if(left != 0) dfs(left,tree,s,cnt+1);
    }
    else if(left != 0) dfs(left,tree,s,cnt);
    if(s[root-1] != 'R'){
        if(right != 0) dfs(right,tree,s,cnt+1);
    }
    else if(right != 0) dfs(right,tree,s,cnt);
}
Infinite Void() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<int,int>> tree(n+1);
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        tree[i+1] = {x,y};
    }
    mn = INT_MAX;
    dfs(1,tree,s,0);
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
