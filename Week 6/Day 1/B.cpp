#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int t;
    cin >> t;
    while(t--){
        ll n,x;
        cin >> n >> x;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin >> a[i];
        auto ok = [&](ll mid){
            ll ans = 0;
            for(int i=0;i<n;i++){
                if(mid > a[i]){
                    ans += (mid - a[i]);
                }
            }
            return ans <= x;
        };
        ll l=1,r=2e9,mid,h=0;
        while(l <= r){
            mid = (l + r) / 2;
            if(ok(mid)){
                h = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        cout << h << endl;
    }
    return 0;
}
