#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    ll n,x,y;
    cin >> n >> x >> y;
    ll sec = min(x,y);
    n--;
    if(n == 0){
        cout << sec << endl;
        return 0;
    }
    auto ok = [&](ll mid){
        ll res = ((mid / x) + (mid / y));
        return res >= n;
    };
    ll l=1,r=2e9,mid,res;
    while(l <= r){
        mid = (l + r) / 2;
        if(ok(mid)){
            res = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << res + sec << endl;
    return 0;
}
