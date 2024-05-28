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
    fst int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end());
    while(m--){
        int x;
        cin >> x;
        int l=0,r=n-1,mid,idx=-1;
        while(l <= r){
            mid = (l + r) / 2;
            if(a[mid] <= x){
                idx = mid;
                l = mid + 1;
            }
            else r = mid - 1;
        }
        cout << idx+1 << " ";
    }
    cout << endl;
    return 0;
}
