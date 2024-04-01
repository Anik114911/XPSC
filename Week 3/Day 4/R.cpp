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
        int a[n];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int cnt = 0;
        for(int i=n-1;i>=0;i--){
            mp[a[i]]++;
            if(mp[a[i]] > 1) break;
            cnt++;
        }
        cout << n - cnt << endl;
    }
    return 0;
}
