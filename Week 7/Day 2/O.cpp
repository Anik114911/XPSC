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
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> one(n);
        vector<ll> zero(n);
        for(ll i=0;i<n;i++) cin >> a[i];
        ll cnt = 0;
        if(a[0] == 1) cnt++;
        one[0] = 0;
        for(ll i=1;i<n;i++){
            one[i] = cnt;
            if(a[i] == 1) cnt++;
        }
        cnt = 0;
        zero[n-1] = 0;
        if(a[n-1] == 0) cnt++;
        for(ll i=n-2;i>=0;i--){
            zero[i] = cnt;
            if(a[i] == 0) cnt++;
        }
        ll c = 0;
        for(ll i=0;i<n;i++){
            if(a[i] == 1) c += zero[i];
        }
        ll mx = c;
        ll tmp = -1;
        for(ll i=0;i<n;i++){
            if(a[i] == 0){
                tmp = i;
                a[i] = 1;
                break;
            }
        }
        c = 0;
        for(ll i=n-1;i>=0;i--){
            if(i >= tmp){
                if(a[i] == 1){
                    c += zero[i];
                }
            }
            else{
                if(a[i] == 1){
                    c += zero[i] - 1;
                }
            }
        }
        mx = max(c,mx);
        if(tmp != -1){
            a[tmp] = 0;
        }
        tmp = INT_MAX;
        for(ll i=n-1;i>=0;i--){
            if(a[i] == 1){
                tmp = i;
                a[i] = 0;
                break;
            }
        }
        c = 0;
        for(ll i=0;i<n;i++){
            if(i <= tmp){
                if(a[i] == 1){
                    c += zero[i] + 1;
                }
            }
            else{
                if(a[i] == 1){
                    c += zero[i];
                }
            }
        }
        cout << max(c,mx) << endl;
    }
    return 0;
}
