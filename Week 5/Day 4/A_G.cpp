#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    vector<ll> v;
    ll sum = 0;
    for(ll x : a){
        sum += x;
        v.push_back(sum);
    }
    ll q;
    cin >> q;
    while(q--){
        ll x;
        cin >> x;
        ll l=0,r=n-1,mid,idx=0;
        while(l <= r){
            mid = (l + r) / 2;
            if(v[mid] >= x){
                idx = mid + 1;
                r = mid - 1;
            }
            else if(v[mid] < x){
                l = mid + 1;
            }
        }
        cout << idx << endl;
    }
    return 0;
}
