#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n;
    cin >> n;
    ll a[n],sum = 0,mn=INT_MAX;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        if(a[i] % 2 != 0) mn = min(mn,a[i]);
        sum += a[i];
    }
    if(n == 1 && sum % 2 != 0){
        cout << "0" << endl;
    }
    else if(sum % 2 != 0){
        sum -= mn;
        cout << sum << endl;
    }
    else cout << sum << endl;
    return 0;
}