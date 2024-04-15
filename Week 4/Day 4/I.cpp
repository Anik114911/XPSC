#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        ll i=0;
        while(true){
            ll r = (1 << i);
            r--;
            if(r >= x) break;
            i++;
        }
        i--;
        ll res = (1 << i);
        ll res2 = (x ^ res);
        if(res >= res2) cout << res2 << " " << res << endl;
        else cout << res << " " << res2 << endl;
    }
    return 0;
}
