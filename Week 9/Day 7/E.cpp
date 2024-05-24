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
    vector<int> v;
    int i=1;
    for(i=2;i<=n;i+=2){
        v.push_back(i);
    }
    for(i=1;i<=n;i+=2){
        v.push_back(i);
    }
    bool ok = true;
    for(i=1;i<n;i++){
        if(abs(v[i]-v[i-1]) == 1){
            ok = false;
            break;
        } 
    }
    if(!ok) cout << "NO SOLUTION" << endl;
    else {
        for(int x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}
