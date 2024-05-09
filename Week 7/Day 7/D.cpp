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
        int n;
        cin >> n;
        vector<int> a(n),v;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i] >= 1 && a[i] <= n && mp[a[i]] == 0) mp[a[i]]++;
            else v.push_back(a[i]);
        }
        int cnt = 0;
        bool ok = true;
        sort(v.begin(),v.end());
        int j = 0;
        for(int i=0;i<n;i++){
            if(mp[i+1] == 0){
                if(j >= v.size()){
                    ok = false;
                    break;
                }
                else if((i+1) != v[j]){
                        if(v[j] < i+1){
                        ok = false;
                        break;
                    }
                    else{
                        int r = v[j] - (i + 1);
                        if((v[j] % r) != (i+1)){
                            ok = false;
                            break;
                        }
                        else cnt++;
                    } 
                    j++;
                }
            }
        }
        if(ok) cout << cnt << endl;
        else cout << "-1" << endl;
    }
    return 0;
}
