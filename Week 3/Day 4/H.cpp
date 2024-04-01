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
        ll a[n];
        for(ll i=0;i<n;i++){
            cin >> a[i];
        }
        priority_queue<ll> pq;
        ll sum = 0;
        for(ll i=0;i<n;i++){
            if(a[i] > 0) pq.push(a[i]);
            else{
                if(!pq.empty()){
                    sum += pq.top();
                    pq.pop();
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
