#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
#define yess cout << "YES" << endl;
#define noo cout << "NO" << endl;
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
using namespace std;
int main(){
    fst
    int t;
    cin >> t;
    while(t--){
        int n,l;
        cin >> n >> l;
        vector<string> v;
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            v.push_back(s);
        }
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int res = 0;
                for(int k=0;k<l;k++){
                    int r1 = v[i][k] - 'a';
                    int r2 = v[j][k] - 'a';
                    res += abs(r1 - r2);
                }
                mn = min(mn,res);
            }
        }
        cout << mn << endl;
    }
    return 0;
}