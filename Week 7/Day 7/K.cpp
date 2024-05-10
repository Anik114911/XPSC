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
const ll mod = 1e9 + 7;
void limitless(){
    ll n,k,ans = 0,r = 1;
    cin >> n >> k;
    for(ll i=0;i<31;i++){
        if(k & (1 << i)){
            ans += r;
            ans %= mod;
        }
        r *= n;
        r %= mod;
    }
    cout << ans << endl;
}
e4{
    fst int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case " << t << ": ";
        limitless();
    }
    return 0;
}
