#include <bits/stdc++.h>
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
    
}
e4{
    fst int n;
    cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int l,r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }
    ll sum = 0;
    ll mx = INT_MIN;
    for(auto it=mp.begin();it!=mp.end();it++){
        sum +=  (1LL * (it->second));
        mx = max(sum,mx);
    }
    cout << mx << endl;
    return 0;
}