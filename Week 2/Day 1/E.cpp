#include<bits/stdc++.h>
#define fst() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst();
    int t;
    cin >> t;
    while(t--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b == c) cout << "+" << endl;
        else cout << "-" << endl;
    }
    return 0;
}