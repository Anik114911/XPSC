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
        ll m,k;
        cin >> m >> k;
        vector<ll> p,n;
        for(ll i=0;i<m;i++){
            ll x;
            cin >> x;
            if(x >= 0) p.push_back(x);
            else{
                x *= -1;
                n.push_back(x);
            }
        }
        sort(p.begin(),p.end());
        sort(n.begin(),n.end());
        ll dis = 0;
        ll cnt = k - 1;
        ll p_size = p.size();
        ll n_size = n.size();
        for(ll i=p_size-1;i>=0;i--){
            cnt++;
            if(cnt == k){
                dis += p[i];
                cnt = 0;
            }
        }
        cnt = k - 1;
        for(ll i=n_size-1;i>=0;i--){
            cnt++;
            if(cnt == k){
                dis += n[i];
                cnt = 0;
            }
        }
        dis *= 2;
        ll mx;
        if(n_size > 0 && p_size > 0) mx = max(n[n_size-1],p[p_size-1]);
        else if(n_size > 0) mx = n[n_size-1];
        else mx = p[p_size-1];
        dis -= mx;
        cout << dis << endl;
    }
    return 0;
}



