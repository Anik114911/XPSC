#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],xr=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            xr ^= a[i];
        }
        if(n % 2 == 0){
            if(xr == 0) cout << "0" << endl;
            else cout << "-1" << endl;
        }
        else cout << xr << endl;
    }
    return 0;
}

