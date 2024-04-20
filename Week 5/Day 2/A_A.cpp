#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    while(k--){
        int x;
        cin >> x;
        int l=0,r=n-1,mid;
        bool ok = false;
        while(l <= r){
            mid = (l + r) / 2;
            if(a[mid] == x){
                ok = true;
                break;
            }
            else if(a[mid] > x){
                r = mid - 1;
            }
            else if(a[mid] < x){
                l = mid + 1;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
