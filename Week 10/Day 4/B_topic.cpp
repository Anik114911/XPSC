#include<bits/stdc++.h>
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
    fst int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int pos = 0;
    if(k % 2 == 0){
        pos = k / 2;
        pos--;
    }
    else pos = k / 2;
    int l=0,r=0;
    pbds <pair<int,int>> p;
    while(r < n){
        p.insert({a[r],r});
        if(r - l + 1 == k){
            auto it = p.find_by_order(pos);
            cout << it->first << " ";
            p.erase({a[l],l});
            l++;
        }
        r++;
    }
    cout << endl;
    return 0;
}
