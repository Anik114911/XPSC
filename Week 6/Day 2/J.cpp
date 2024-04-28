#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int n,a,b;
    cin >> n >> a >> b;
    int l=1,r=100,mid,ans=0;
    auto ok = [&](int mid){
        int tmp = a,tm = b;
        if(tmp >= mid){
            tmp -= mid;
        }
        else return false;
        if(tm >= mid){
            tm -= mid;
        }
        else return false;
        for(int i=2;i<n;i++){
            if(tmp >= mid){
                tmp -= mid;
            }
            else if(tm >= mid){
                tm -= mid;
            }
            else{
                return false;
            }
        }
        return true;
    };
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
