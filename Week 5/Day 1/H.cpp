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
        ll sum = 0,cnt = 0;
        for(ll i=0;i<n;i++){
            cin >> a[i];
            if(a[i] < 1) cnt++;
        }
        sort(a.begin(),a.end(),greater<ll>());
        if((cnt % 2) == 0){
            for(ll x : a){
                if(x < 1) x *= -1;
                sum += x;
            }
            cout << sum << endl;
        }
        else{
            ll mn = INT_MAX;
            for(ll x : a){
                if(x < 1) x *= -1;
                mn = min(x,mn);
                sum += x;
            }
            cout << sum - (mn * 2) << endl;
        }
    }
    return 0;
}
