#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    string st;
    cin >> st;
    ll b=0,s=0,c=0;
    for(ll i=0;i<st.length();i++){
        if(st[i] == 'S') s++;
        else if(st[i] == 'B') b++;
        else if(st[i] == 'C') c++;
    }
    ll nb,ns,nc;
    cin >> nb >> ns >> nc;
    ll pb,ps,pc;
    cin >> pb >> ps >> pc;
    ll money;
    cin >> money;
    auto ok = [&](ll mid){
        ll bread = (b * mid) - nb;
        ll sauce = (s * mid) - ns;
        ll chese = (c * mid) - nc;
        bread *= pb;
        sauce *= ps;
        chese *= pc;
        if(bread < 0) bread = 0;
        if(sauce < 0) sauce = 0;
        if(chese < 0) chese = 0;
        return (bread + sauce + chese) <= money;
    };
    ll l = 0,r = 1e14,mid,ans=0;
    while(l <= r){
        mid = (l + r) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}
