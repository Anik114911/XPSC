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
        int n,b;
        cin >> n >> b;
        vector<int> a(n);
        vector<int> v;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if((a[i] & b) == b){
                v.push_back(a[i]);
            }
        }
        for(int i=1;i<v.size();i++){
            v[i] &= v[i-1];
        }
        if((v.size() > 0) && v[v.size()-1] == b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
