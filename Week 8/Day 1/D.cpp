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
    ll n,k;
    cin >> n >> k;
    vector<ll> v;
    for(ll i=1;i*i<=n;i++){
        if(n % i == 0){
            v.push_back(i);
            if(n / i != i) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    if(v.size() < k){
        cout << "-1" << endl;
    }
    else {
        cout << v[k-1] << endl;
    }
    return 0;
}
