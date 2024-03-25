#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    ll l=0,r=0,cnt=0;
    multiset<ll> ms;
    while(r < n){
        ms.insert(a[r]);
        ll mx = *(ms.rbegin());
        ll mn = *(ms.begin());
        if(mx - mn <= k){
            cnt += r - l + 1;
        }
        else{
            while(l < r){
                auto f = ms.find(a[l]);
                ms.erase(f);
                l++;
                mx = *(ms.rbegin());
                mn = *(ms.begin());
                if(mx - mn <= k) break;
            }
            mx = *(ms.rbegin());
            mn = *(ms.begin());
            if(mx - mn <= k){
                cnt += r - l + 1;
            }
        }
        r++;
    }
    cout << cnt << endl;
    return 0;
}
