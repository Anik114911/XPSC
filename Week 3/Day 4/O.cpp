// @Problem Link : https://codeforces.com/problemset/problem/1843/C
// Problem statement was interesting

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
        ll n,sum=0;
        cin >> n;
        while(n >= 1){
            sum += n;
            n /= 2;
        }
        cout << sum << endl;
    }
    return 0;
}
