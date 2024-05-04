#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int t;
    cin  >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> v;
        bool ok = true;
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
            int r = a[i] - b[i];
            if(r < 0) {
                ok = false;
                break;
            }
            if(b[i] != 0) v.push_back(r);
            else mx = max(a[i],mx);
        }
        if(!ok) cout << "NO" << endl;
        else if(v.size() == 0) cout << "YES" << endl;
        else{
            int tmp = v[0];
            for(int x : v){
                if(x != tmp){
                    ok = false;
                    break;
                }
            }
            if(tmp < mx){
                ok = false;
            }
            if(ok) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
