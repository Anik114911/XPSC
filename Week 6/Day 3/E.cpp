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
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end());
        auto ok = [&](ll mid){
            ll lim = (mid * 2) + a[0];
            ll cnt = 0, x = 1;
            for(ll i=0;i<n;i++){
                if(lim >= a[i]) cnt++;
                else{
                    lim = (mid * 2) + a[i];
                    cnt++;
                    x++;
                }
                if(x > 3) return false;
            }
            return cnt == n;
        };
        ll l=0,r=1e15,mid,res;
        while(l <= r){
            mid = (l + r) / 2;
            if(ok(mid)){
                res = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        cout << res << endl;
    }
    return 0;
}







