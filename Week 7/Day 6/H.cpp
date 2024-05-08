#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
const int N = 2e5 + 5;
int main(){
    fst
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n),frq(N,0),ans(N,0);
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i] <= n) frq[a[i]]++;
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=sqrt(i);j++){
                if((i % j) == 0){
                    int res = i / j;
                    if(res != j){
                        ans[i] += frq[res];
                        ans[i] += frq[j];
                    }
                    else {
                        ans[i] += frq[j];
                    }
                }
            }
        }
        int mx = 0;
        for(int i=1;i<=n;i++){
            if(i <= n) mx = max(mx,ans[i]);
        }
        cout << mx << endl;
    }
    return 0;
}
