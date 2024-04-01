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
        ll n,m,h;
        cin >> n >> m >> h;
        ll a[n],b[m];
        for(ll i=0;i<n;i++){
            cin >> a[i];
        }
        for(ll i=0;i<m;i++){
            cin >> b[i];
        }
        sort(a,a+n,greater<ll>());
        sort(b,b+m,greater<ll>());
        ll i=0,j=0,sum=0;
        while(i < n && j < m){
            ll res = b[i] * h;
            if(res > a[i]) sum += a[i];
            else sum += res;
            i++;
            j++;
        }
        cout << sum << endl;
    }
    return 0;
}
