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
    fst int tc;
    // cin >> tc;
    // for (int t = 1; t <= tc; t++)
    // {
    //     // cout << "Case " << t << ": ";
    //     limitless();
    // }
    ll x,y;
    cin >> x >> y;
    if(x == 1 && y != 1){
        cout << "<" << endl;
    }
    else if(y == 1 && x != 1){
        cout << ">" << endl;
    }
    else if(x == y) cout << "=" << endl;
    else if(x > y){
        if(pow(x,y) < 1e18 && pow(y,x) < 1e18){
            if(pow(x,y) == pow(y,x)){
                cout << "=" << endl;
            }
            else if(pow(x,y) > pow(y,x)){
                cout << ">" << endl;
            }
            if(pow(x,y) < pow(y,x)){
                cout << "<" << endl;
            }
        }
        else cout << "<" << endl;
    }
    else{
        if(pow(x,y) < 1e18 && pow(y,x) < 1e18){
            if(pow(x,y) == pow(y,x)){
                cout << "=" << endl;
            }
            else if(pow(x,y) > pow(y,x)){
                cout << ">" << endl;
            }
            if(pow(x,y) < pow(y,x)){
                cout << "<" << endl;
            }
        }
        else cout << ">" << endl;
    }
    return 0;
}
