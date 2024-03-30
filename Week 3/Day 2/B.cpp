#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long int
#define endl '\n'
using namespace std;
int main(){
    fst
    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >> q;
        int a[n],p[n+1],s[n+1];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        p[0]=0;
        for(int i=1;i<=n;i++){
            p[i] = a[i-1] + p[i-1];
        }
        while(q--){
            int l,r,k;
            cin >> l >> r >> k;
            int lim = r - l + 1;
            int res = lim * k;
            int s1 = p[l-1];
            int s2 = p[n] - p[r];
            int ok = s1+s2+res;
            if(ok % 2 != 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}


