#include<bits/stdc++.h>
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
bool cmp(pair<ll,ll> a, pair<ll,ll> b){
    return a.first < b.first;
}
void limitless(){
    
}
e4{
    fst int tc;
    // cin >> tc;
    // for (int t = 1; t <= tc; t++)
    // {
    //     // cout << "Case " << t << ": ";
    //     limitless();
    // }
    ll n,x;
    cin >> n >> x;
    vector<pair<ll,ll>> a;
    for(ll i=0;i<n;i++){
        int x;
        cin >> x;
        a.push_back({x,i+1});
    }
    sort(a.begin(),a.end(),cmp);
    bool ok = false;
    ll idx1,idx2,idx3;
    for(ll i=0;i<n;i++){
        ll k = n-1;
        ll tmp = x - a[i].first;
        if(ok) break;
        for(ll j=0;j<k;){
            if(j == i){
                j++;
            }
            else if(k == i){
                k--;
            }
            else{
                if(a[j].first + a[k].first > tmp) k--;
                else if(a[j].first + a[k].first < tmp) j++;
                else if(a[j].first + a[k].first == tmp){
                    ok = true;
                    idx1 = a[i].second;
                    idx2 = a[j].second;
                    idx3 = a[k].second;
                    break;
                }
            }
        }
    }
    if(!ok) cout << "IMPOSSIBLE" << endl;
    else cout << idx1 << " " << idx2 << " " << idx3 << endl;
    return 0;
}
