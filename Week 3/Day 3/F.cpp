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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll prefix[n+1];
        prefix[0] = 0;
        ll sum = 0;
        ll limit = n / 2;
        vector<ll> v;
        for(ll i=0;i<n;i++){
            if(s[i] == 'L'){
                prefix[i+1] = (i+1) - 1;
            }
            else prefix[i+1] = n - (i+1);
            if(prefix[i+1] < limit) v.push_back(prefix[i+1]);
            sum += prefix[i+1];
        }
        sort(v.begin(),v.end());
        ll cnt = 0;
        for(ll x : v){
            cnt++;
            sum -= x;
            ll res = n - x - 1;
            sum += res;
            cout << sum << " ";
        }
        for(ll i=cnt;i<n;i++){
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
