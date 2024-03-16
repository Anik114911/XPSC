#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll s,t,cnt=0;
    cin >> s >> t;
    for(ll i=0;i<=s;i++){
        for(ll j=0;i+j<=s;j++){
            for(ll k=0;i+j+k<=s;k++){
                if((i+j+k <= s) && (i*j*k <= t)){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}