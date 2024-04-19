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
        ll a,b,n,s;
        cin >> a >> b >> n >> s;
        if(((a * n) + b) < s){
            cout << "NO" << endl;
            continue;
        }
        ll r = (s / n);
        if(r <= a){
            if(((r * n) + b) >= s) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else{
            if((a * n) + b >= s) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
