#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    ll n,k;
    cin >> n >> k;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin >> a[i];
    }
    ll f[100005]={0};
    ll l=0,r=0,cnt=0,unique=0;
    while(r < n){
        if(f[a[r]] == 0) unique++;
        f[a[r]]++;
        if(unique <= k){
            cnt += r - l + 1;
        }
        else{
            while(l < r && unique > k){
                f[a[l]]--;
                if(f[a[l]] == 0) unique--;
                l++;
            }
            if(unique <= k){
                cnt += r - l + 1;
            }
        }
        r++;
    }
    cout << cnt << endl;
    return 0;
}
