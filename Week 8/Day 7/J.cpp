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
ll lcm(ll a, ll b){
    return (a / (__gcd(a,b)) * b);
}
void limitless(){
    
}
e4{
    fst int tc;
    // cin >> tc;
    // for (int t = 1; t <= tc; t++)
    // {
    //     // cout << "Case " << t << ": ";
    //     limitless();
    // }
    ll n,a,b,p,q;
    cin >> n >> a >> b >> p >> q;
    ll diva = n / a;
    ll divb = n / b;
    ll lc = lcm(a,b);
    ll divl = n / lc;
    if(p > q) divb -= divl;
    else diva -= divl;
    cout << ((diva * p) + (divb * q)) << endl;
    return 0;
}
