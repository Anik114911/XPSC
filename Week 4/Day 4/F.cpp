#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        map<ll,ll> mp;
        for(ll i=0;i<n;i++){
            cin >> a[i];
            mp[__lg(a[i])]++;
        }
        ll ans = 0;
        for(auto it = mp.begin();it != mp.end();it++){
            if(it->second >= 2) ans += (it->second * (it->second - 1)) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}
