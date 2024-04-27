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
        ll n,q;
        cin >> n >> q;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin >> a[i];
        vector<ll> v(n);
        vector<ll> pre(n);
        ll sum = 0,mx = INT_MIN;
        for(ll i=0;i<n;i++){
            sum += a[i];
            pre[i] = sum;
            mx = max(mx,a[i]);
            v[i] = mx;
        }
        while(q--){
            ll x;
            cin >> x;
            ll l=0,r=n-1,mid,idx=-1;
            while(l <= r){
                mid = (l + r) / 2;
                if(v[mid] <= x){
                    idx = mid;
                    l = mid + 1;
                }
                else if(v[mid] > x){
                    r = mid - 1;
                }
            }
            if(idx == -1) cout << "0" << " ";
            else cout << pre[idx] << " ";
        }
        cout << endl;
    }
    return 0;
}
