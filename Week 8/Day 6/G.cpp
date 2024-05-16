#include<bits/stdc++.h>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long 
#define endl '\n'
#define e4 int main()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define PI 2.0 * acos(0.0)
using namespace std;
const int N = 1e5 + 5;
void limitless(){
    
}
e4{
    fst int tc;
    // cin >> tc;
    // for (int t = 1; t <= tc; t++)
    // {
    //     // cout << "Case " << t << ": ";
    //     limitless();
    // }
    int n;
    cin >> n;
    vector<int> a(n),v(N,0);
    for(int i=0;i<n;i++) cin >> a[i];
    bool ok = true;
    for(int i=0;i<n;i++){
        if(a[i] != 1){
            ok = false;
            break;
        }
    }
    if(ok){
        cout << "1" << endl;
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=1;j*j<=a[i];j++){
            if(a[i] % j == 0){
                if(j != 1) v[j]++;
                if(a[i] / j != j) v[a[i]/j]++;
            }
        }
    }
    int mx = INT_MIN;
    for(int i=0;i<N;i++){
        mx = max(v[i],mx);
    }
    cout << mx << endl;
    return 0;
}
