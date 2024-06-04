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
#define PI 2.0 * acos(0.0)
using namespace std;
#ifdef LOKAL
#include "Debug_Template.h"
#else
#define HERE
#define debug(args...) 
#endif 
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag,\
tree_order_statistics_node_update>;
const int N = 2e5 + 5;
void limitless(){
    int n,k,q;
    cin >> n >> k >> q;
    vector<int> a(N,0);
    for(int i=0;i<n;i++){
        int l,r;
        cin >> l >> r;
        a[l]++;
        a[r+1]--;
    }
    vector<int> v;
    for(int i=1;i<N;i++){
        a[i] += a[i-1];
        if(a[i] >= k) v.push_back(i);
    }
    sort(v.begin(),v.end());
    while(q--){
        if(v.size() == 0){
            cout << "0" << endl;
            continue;
        }
        int l = 0,r = v.size()-1,left,right;
        cin >> left >> right;
        int mid,ans1 = -1,ans2 = -1;
        while (l <= r){
            mid = (l + r) / 2;
            if(v[mid] >= left){
                r = mid - 1;
                ans1 = mid;
            }
            else{
                l = mid + 1;
            }
        }
        l = 0, r = v.size()-1;
        while (l <= r){
            mid = (l + r) / 2;
            if(v[mid] <= right){
                l = mid + 1;
                ans2 = mid;
            }
            else{
                r = mid - 1;
            }
        }
        if ((ans1 <= ans2) && (v[ans1] >= left && v[ans1] <= right) && (v[ans2] >= left && v[ans2] <= right)) {
            cout << ans2 - ans1 + 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    } 
}
e4{
    fst int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; ++i)
    {
        // cout << "Case " << i << ": ";
        limitless();
    }
    return 0;
}