#include<bits/stdc++.h>
#define fst() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define ll long long 
#define endl '\n'
#define cyes cout << "YES" << endl;
#define cno cout << "NO" << endl;
#define no cout << "No" << endl;
#define yes cout << "Yes" << endl;
using namespace std;
int main(){
    fst();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s,s2="Timur";
        cin >> s;
        if(s.length() != s2.length()){
            cno 
            continue;
        }
        bool ok = true;
        sort(s.begin(),s.end());
        sort(s2.begin(),s2.end());
        for(int i=0;i<s.length();i++){
            if(s[i] != s2[i]){
                ok = false;
                break;
            }
        }
        if(ok) cyes
        else cno
    }
    return 0;
}