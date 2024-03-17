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
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int mx = 0;
        for(int i=0;i<n;i++){
            int r = a[i] - (i + 1);
            mx = max(r,mx);
        }
        cout << mx << endl;
    }
    return 0;
}
