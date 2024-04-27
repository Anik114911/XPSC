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
        ll x;
        cin >> x;
        vector<ll> a;
        ll i=1;
        while(true){
            ll r = i * i * i;
            if(r > x) break;
            else a.push_back(i);
            i++;
        }
        ll n = a.size();
        bool ok = false;
        ll first=0,second=0;
        for(ll i=0;i<n;i++){
            ll res = a[i] * a[i] * a[i];
            ll l=0,r=n-1,mid;
            while(l <= r){
                mid = (l + r) / 2;
                ll ans = res + (a[mid] * a[mid] * a[mid]);
                if(ans == x){
                    ok = true;
                    first = a[i];
                    second = a[mid];
                    break;
                } 
                else if(ans > x){
                    r = mid - 1;
                }
                else if(ans < x){
                    l = mid + 1;
                }
            }
            if(ok) break;
        }
        if(first && second) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
