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
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int cnt = 0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second % 2 != 0){
                if(k > 0) k--;
                else cnt++; 
            }
        }
        if(cnt > 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}

