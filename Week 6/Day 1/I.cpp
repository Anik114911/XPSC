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
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a.begin(),a.end());
    int m = n / 2;
    auto ok = [&](int val){
        long long ans = 0;
        for(int i=m;i<n;i++){
            if(a[i] < val) ans += (val - a[i]);
        }
        return ans <= k;
    };
    long long l=a[m],r=2e9+5,mid,ans=-1;
    while(l <= r){
        mid = (l + r) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}
