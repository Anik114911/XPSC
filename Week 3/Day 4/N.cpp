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
        ll a[n];
        bool ok = true;
        ll cnt = 0, sum = 0;
        for(ll i=0;i<n;i++){
            cin >> a[i];
        }
        for(ll i=0;i<n;i++){
            if(a[i] <= 0){
                if(ok && a[i] < 0){
                    cnt++;
                    ok = false;
                }
                a[i] *= (-1);
            }
            else ok = true;
            sum += a[i];
        }
        cout << sum << " " << cnt << endl;
    }
    return 0;
}
