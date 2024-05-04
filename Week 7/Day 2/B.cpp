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
        vector<int> a(n);
        vector<int> v(n);
        for(int i=0;i<n;i++) cin >> a[i];
        v[0] = abs(a[0] - a[1]);
        v[n-1] = abs(a[n-1] - a[n-2]);
        for(int i=1;i<n-1;i++){
            int r = abs(a[i] - a[i-1]);
            int r2 = abs(a[i] - a[i+1]);
            v[i] = max(r,r2);
        }
        int mn = INT_MAX;
        for(int x : v){
            mn = min(x,mn);
        }
        cout << mn << endl;
    }
    return 0;
}
