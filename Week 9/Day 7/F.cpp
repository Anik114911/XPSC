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
    ll x,y;
    cin >> y >> x;
    if(x <= y){
        ll fy = y * y;
        if(y % 2 == 0) cout << fy - (x-1) << endl;
        else {
            fy -= (y-1);
            fy -= (y-1);
            cout << fy + (x-1) << endl;
        }
    }
    else{
        ll fx = x * x;
        if(x % 2 != 0) {
            fx -= (y-1);
            cout << fx << endl;
        }
        else{
            fx -= (x-1);
            fx -= (x-1);
            cout << fx + (y-1) << endl;
        }
    }
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
