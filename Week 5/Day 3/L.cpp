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
        for(ll i=0;i<n;i++){
            cin >> a[i];
        }
        ll pos=0,neg=0;
        for(ll i=0;i<n;i++){
            if(a[i] >= 0) pos += a[i];
            else if(pos == 0 and a[i] <= 0) neg += a[i];
            else {
                if((a[i] * (-1)) <= pos){
                    pos += a[i];
                }
                else{
                    a[i] += pos;
                    neg += a[i];
                    pos = 0;
                }
            }
        }
        cout << max(pos,neg) << endl;
    }
    return 0;
}
