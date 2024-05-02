#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    ll m,n;
    cin >> m >> n;
    vector<ll> t;
    vector<ll> z;
    vector<ll> y;
    for(ll i=0;i<n;i++){
        ll a,b,c;
        cin >> a >> b >> c;
        t.push_back(a);
        z.push_back(b);
        y.push_back(c);
    }
    vector<int> vec(n);
    auto ok = [&](ll mid){
        vector<ll> may(n);
        ll cur = m;
        for(ll i=0;i<n;i++){
            ll ans = 0;
            ll res = (t[i] * z[i]) + y[i];
            ans += ((mid / res) * z[i]);
            ll r = mid % res;
            r = (r / t[i]);
            if(r > z[i]) ans += z[i];
            else ans += r;
            ans = min(ans,cur);
            cur -= ans;
            may[i] = ans;
        }
        if(!cur){
            for(int i=0;i<n;i++){
                vec[i] = may[i];
            }
        }
        return (!cur);
    };
    ll l=0,r=1e8,mid,ans=0;
    while(l <= r){
        mid = (l + r) / 2;
        if(ok(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans << endl;
    for(int x : vec) cout << x << " ";
    cout << endl;
    return 0;
}


