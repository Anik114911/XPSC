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
bool square(ll a){
    ll r = sqrtl(a);
    return r*r == a;
}
bool prime(ll a){
    if(a == 1) return false;
    a = sqrtl(a);
    for(ll i=2;i*i<=a;i++){
        if(a % i == 0) return false;
    }
    return true;
}
void limitless(){
    ll n;
    cin >> n; 
    if(square(n) && prime(n)) yes 
    else no 
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


























