#include<bits/stdc++.h>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long 
#define endl '\n'
#define e4 int main()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define PI 2.0 * acos(0.0)
using namespace std;

void limitless(){
    
}
e4{
    fst ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    ll cnt = 0;
    for(ll i=1;i<n;i++){
        if(a[i] < a[i-1]){
            cnt += (a[i-1] - a[i]);
            a[i] = a[i-1];
        }
    }
    cout << cnt << endl;
    return 0;
}


