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
    ll l=0,r=0,sum=0,mn=1e18;
    while(r < n){
        sum += a[r];
        if(sum >= k){
            ll res = r - l + 1;
            mn = min(mn,res);
            sum -= a[l];
            l++;
            while(sum >= k && l <= r){
                res = r - l + 1;
                mn = min(mn,res);
                sum -= a[l];
                l++;
            }
        }
        r++;
    }
    if(mn == 1e18) cout << "-1" << endl;
    else cout << mn << endl;
    return 0;
}