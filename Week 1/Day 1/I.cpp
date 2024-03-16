#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    ll x,y,cnt=0;
    cin >> x >> y;
    while(x <= y){
        cnt++;
        x *= 2;
    }
    cout << cnt << endl;
    return 0;
}