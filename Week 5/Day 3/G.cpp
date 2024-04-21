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
        ll n,c;
        cin >> n >> c;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin >> a[i];
            a[i] += i+1;
        }
        sort(a.begin(),a.end());
        ll sum = 0,cnt = 0;
        for(ll x : a){
            sum += x;
            if(sum <= c){
                cnt++;
            }
            else break;
        }
        cout << cnt << endl;
    }
    return 0;
}
