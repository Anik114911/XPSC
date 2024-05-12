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
// problem link : https://vjudge.net/contest/626964#problem/B
void limitless(){
    ll l,r;
    cin >> l >> r;
    yes 
    for(ll i=l;i<=r;i+=2){
        cout << i << " " << i+1 << endl;
    }
}
e4{
    fst int tc;
    // cin >> tc;
    // for (int t = 1; t <= tc; t++)
    // {
        // cout << "Case " << t << ": ";
    limitless();
    //}
    return 0;
}
