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
ll lcm(ll a, ll b){
    return (a / __gcd(a,b)) * b;
}
e4{ 
    fst int tc;
    // cin >> tc;
    // for (int t = 1; t <= tc; t++)
    // {
    //     // cout << "Case " << t << ": ";
    //     limitless();
    // }
    ll n;
    cin >> n;
    vector<ll> v;
    for(ll i=1;i*i<=n;i++){
        if(n % i == 0){
            v.push_back(i);
            if(n / i != i){
                v.push_back(n/i);
            }
        }
    }
    ll mn = n, ans = n, ans2 = 1;
    for(ll i=0;i<v.size();i++){
        if(max(v[i],(n/v[i])) < mn && lcm(v[i],(n/v[i])) == n){
            mn = max(v[i],(n/v[i]));
            ans = v[i];
            ans2 = (n/v[i]); 
        }
    }
    cout << ans << " " << ans2 << endl;
    return 0;
}
