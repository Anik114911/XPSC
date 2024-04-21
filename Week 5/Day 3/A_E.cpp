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
        ll n,q;
        cin >> n >> q;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end(),greater<ll>());
        vector<ll> v;
        ll sum = 0;
        for(ll x : a){
            sum += x;
            v.push_back(sum);
        }
        while(q--){
            ll x;
            cin >> x;
            ll l=0,r=n-1,mid,pos=-1;
            while(l <= r){
                mid = (l+r) / 2;
                if(v[mid] >= x){
                    pos = mid + 1;
                    r = mid - 1;
                }
                else if(v[mid] < x){
                    l = mid + 1;
                }
            }
            cout << pos << endl;
        }
    }
    return 0;
}
