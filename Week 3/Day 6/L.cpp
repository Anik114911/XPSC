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
        int n,q;
        cin >> n >> q;
        int a[n];
        map<int,int> mp1;
        map<int,int> mp2;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(mp1[a[i]] == 0){
                mp1[a[i]] = i+1;
            }
            else mp2[a[i]] = i+1;
        }
        while(q--){
            int l,r;
            cin >> l >> r;
            if(mp1[l] == 0 || mp1[r] == 0) cout << "NO" << endl;
            else if(mp1[l] < mp1[r]) cout << "YES" << endl;
            else if(mp1[l] < mp2[r]) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
