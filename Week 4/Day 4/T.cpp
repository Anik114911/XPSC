#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> v(m+1);
    for(int i=0;i<=m;i++){
        cin >> v[i];
    }
    vector<vector<int>> mask;
    for(int i=0;i<=m;i++){
        vector<int> a;
        for(int j=0;j<n;j++){
            if((v[i] >> j) & 1) a.push_back(1);
            else a.push_back(0);
        }
        mask.push_back(a);
    }
    vector<int> f = mask[m];
    int cnt = 0,ans = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mask[i][j] != f[j]) cnt++;
        }
        if(cnt <= k){
            ans++;
            cnt = 0;
        }
        else cnt = 0;
    }
    cout << ans << endl;
    return 0;
}
