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
        ll n,k,q;
        cin >> n >> k >> q;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin >> a[i];
        }
        ll l=0,r=0,cnt=0,mx=INT_MIN,ways=0;
        while(r < n){
            mx = max(mx,a[r]);
            cnt++;
            if(cnt >= k && mx <= q){
                if(cnt == k) ways++;
                else ways += (cnt - k) + 1;
            }
            else if(mx > q) {
                l = r+1;
                cnt = 0;
                mx = INT_MIN;
            }
            r++;
        }
        cout << ways << endl;
    }
    return 0;
}
