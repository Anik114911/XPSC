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
        ll res = (n * (n + 1)) / 2;
        if(res % n == 0){
            for(ll i=1;i<=n;i++) cout << i << " ";
            cout << endl;
        }
        else {
            ll r = res % n;
            for(ll i=1;i<=n;i++){
                if(r == i){
                    cout << i + r << " ";
                }
                else cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
