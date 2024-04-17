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
        int n,mx=0,mn=INT_MAX;
        cin >> n;
        vector<int> a(n);
        int x=0,y=-1;
        for(int i=0;i<n;i++){
            cin >> a[i];
            x |= a[i];
            y &= a[i];
            mx = max(mx,a[i]);
            mn = min(mn,a[i]);
        }
        int res = mx - mn;
        res = max(res,(x-y));
        cout << res << endl;
    }
    return 0;
}
