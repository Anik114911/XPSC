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
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int l=0,r=0,cnt=0,odd=0,ans=0;
        while(r < n){
            cnt++;
            if(a[r] % 2 != 0) odd++;
            if(cnt == k && odd > 0) ans++;
            else if(cnt > k){
                if(a[l] % 2 != 0) odd--;
                l++;
                cnt--;
                if(cnt == k && odd > 0) ans++;
            }
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}
