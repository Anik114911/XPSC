#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    ll n,l,r,x;
    cin >> n >> l >> r >> x;
    vector<ll> a(n);
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    ll sum = 0,mx = INT_MIN,mn = INT_MAX,cnt = 0;
    for(ll i=0;i<(1<<n);i++){
        sum = 0;
        mx = INT_MIN;
        mn = INT_MAX;
        for(ll j=0;j<n;j++){
            if(((i >> j) & 1) == 1){
                sum += a[j];
                mx = max(mx,a[j]);
                mn = min(mn,a[j]);
            }
        }
        if(sum >= l && sum <= r && (mx - mn) >= x){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
