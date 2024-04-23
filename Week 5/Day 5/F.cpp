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
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        vector<int> bits(33,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<=31;j++){
                if(((a[i] >> j) & 1) == 1){
                    bits[j]++;
                }
            }
        }
        bool ok = true;
        vector<int> v;
        for(int i=1;i<=n;i++){
            for(int j=0;j<=31;j++){
                if((bits[j] % i) != 0){
                    ok = false;
                    break;
                }
            }
            if(ok) v.push_back(i);
            else ok = true;
        }
        for(int x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}
