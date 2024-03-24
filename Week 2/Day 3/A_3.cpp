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
    ll l=0,r=0,sum=0,cnt=0;
    while(r < n){
        sum += a[r];
        if(sum <= k){
            cnt += r - l + 1;
        }
        else{
            sum -= a[l];
            l++;
            while(sum > k && l <= r) {
                sum -= a[l];
                l++;
            }
            if(sum <= k){
                cnt += r - l + 1;
            }
        }
        r++;
    }
    cout << cnt << endl;
    return 0;
}