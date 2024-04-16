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
        vector<int> v(n);
        int mn=INT_MAX,mx=INT_MIN;
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        for(int i=1;i<n;i++){
            v[i] &= v[i-1];
        }
        cout << v[n-1] << endl;
    }
    return 0;
}
