#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int t;cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s.length() <= 3) cout << "NO" << endl;
        else{
            int cnt = 0;
            map<char,int> mp;
            for(int i=0;i<s.length();i++){
                mp[s[i]]++;
                if(mp[s[i]] == 2){
                    cnt++;
                }
            }
            if(cnt >= 2) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}
