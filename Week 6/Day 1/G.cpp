#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll l=0,r=2e9,mid,val,res;
        while(l <= r){
            mid = (l + r) / 2;
            res = mid / n;
            res += k;
            if(res <= mid){
                val = mid;
                r = mid - 1;
            }
            else if(res > mid){
                l = mid + 1;
            }
        }
        cout << val << endl;
    }
    return 0;
}
