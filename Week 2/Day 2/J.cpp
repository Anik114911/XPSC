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
        string s1,s2;
        cin >> s1;
        cin >> s2;
        bool ok = true;
        for(int i=0;i<n;i++){
            if(s1[i] == 'R' && s2[i] != 'R'){
                ok = false;
                break;
            }
            else if(s2[i] == 'R' && s1[i] != 'R'){
                ok = false;
                break;
            }
        }
        if(ok) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}