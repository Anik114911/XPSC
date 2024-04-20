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
        ll a,b,c;
        cin >> a >> b >> c;
        vector<ll> v(c);
        ll sum = b,res = 0;
        for(ll i=0;i<c;i++){
            cin >> v[i];
        }
        for(int i=0;i<c;i++){
            if(sum + v[i] <= a){
                sum += v[i];
            }
            else{
                sum--;
                res += sum;
                if(v[i] > a) sum = a;
                else{
                    if((v[i]+1) > a) sum = v[i];
                    else sum = v[i]+1;
                }
            }
        }
        res += sum;
        cout << res << endl;
    }
    return 0;
}
