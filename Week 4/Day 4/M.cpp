#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    vector<ll> palindrome;
    for(ll i=0;i<(1 << 15);i++){
        string s = to_string(i);
        ll k = s.length()-1;
        bool ok = true;
        for(ll j=0;j<k;j++){
            if(s[j] != s[k]){
                ok = false;
                break;
            }
            k--;
        }
        if(ok) palindrome.push_back(i);
    }
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        ll mp[100005]={0};
        for(ll i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        ll ans = 0;
        for(ll i=0;i<n;i++){
            if(mp[a[i]] > 0){
                for(ll j=0;j<palindrome.size();j++){
                    if(mp[a[i] ^ palindrome[j]] > 0){
                        ans += mp[a[i] ^ palindrome[j]];
                    }
                }
                mp[a[i]]--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
