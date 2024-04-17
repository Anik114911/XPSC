#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int res = 0;
    bool ok = false;
    for(int i=0;i<(1 << n);i++){
        res = 0;
        for(int j=0;j<n;j++){
            if(((i >> j) & 1)) res += a[j];
            else res -= a[j];
        }
        if(res == 0 || (res % 360) == 0){
            ok = true;
            break;
        }
    }
    if(ok) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}












