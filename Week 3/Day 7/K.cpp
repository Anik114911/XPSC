#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first > b.first;
}
int main(){
    fst
    int t;cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n],b[n],c[n];
        vector<pair<int,int>> v1,v2,v3;
        for(int i=0;i<n;i++){
            cin >> a[i];
            v1.push_back({a[i],i});
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
            v2.push_back({b[i],i});
        }
        for(int i=0;i<n;i++){
            cin >> c[i];
            v3.push_back({c[i],i});
        }
        sort(v1.begin(),v1.end(),cmp);
        sort(v2.begin(),v2.end(),cmp);
        sort(v3.begin(),v3.end(),cmp);
        int mx = 0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    if(v1[i].second != v2[j].second && v1[i].second != v3[k].second && v2[j].second != v3[k].second){
                        mx = max(mx,(v1[i].first + v2[j].first + v3[k].first));
                    }
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
}
