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
        int ebong = n,mx = 0;
        if(ebong == 0){
            cout << ebong << endl;
            continue;
        }
        int i = n - 1;
        while(ebong > 0){
            ebong &= i;
            mx = i;
            i = ebong-1;
        }
        cout << mx << endl;
    }
    return 0;
}