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
    ll l=0,r=0,cnt=0,sum=0;
    while(r < n){
        sum += a[r];
        if(sum >= k){
            cnt++;
            ll res = (n-1) - r;
            cnt += res;
            while(l <= r && sum >= k){
                sum -= a[l];
                l++;
                if(sum >= k){
                    cnt++;
                    res = (n-1) - r;
                    cnt += res;
                }
            }
        }
        r++;
    }
    cout << cnt << endl;
    return 0;
}
