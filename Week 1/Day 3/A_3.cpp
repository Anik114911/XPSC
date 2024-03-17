#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    ll n,m;
    cin >> n >> m;
    ll a[n],b[m];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    for(ll i=0;i<m;i++){
        cin >> b[i];
    }
    ll l=0,r=0,sum=0;
    while(l < n && r < m){
        ll cnt1 = 0, cnt2 = 0, curr = a[l];
        while(a[l] == curr && l < n){
            cnt1++;
            l++;
        }
        while(curr > b[r] && r < m){
            r++;
        }
        while(b[r] == curr && r < m){
            cnt2++;
            r++;
        }
        sum += (cnt1 * cnt2);
    }
    cout << sum << endl;
    return 0;
}





