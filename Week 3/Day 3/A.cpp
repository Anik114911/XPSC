#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long int
#define endl '\n'
using namespace std;
int main(){
    fst
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s,st;
        cin >> s;
        bool ok = true;
        for(int i=0;i<n;i++){
            if(s[i] != 'M' && s[i] != 'E' && s[i] != 'O' && s[i] != 'W' && s[i] != 'm' && s[i] != 'e' && s[i] != 'o' && s[i] != 'w'){
                ok = false;
                break;
            }
        }
        if(!ok){
            cout << "NO" << endl;
            continue;
        }
        for(int i=0;i<n-1;i++){
            if(s[i] == s[i+1] || s[i] == s[i+1] - 32 || s[i] - 32 == s[i+1]){
                
            }
            else st.push_back(s[i]);
        }
        st.push_back(s[n-1]);
        if(st.length() != 4) cout << "NO" << endl;
        else{
            int j=0;
            ok = true;
            for(int i=0;i<4;i++){
                if(j == 0 && (st[i] == 'm' || st[i] == 'M')) j++;
                else if(j == 1 && (st[i] == 'e' || st[i] == 'E')) j++;
                else if(j == 2 && (st[i] == 'o' || st[i] == 'O')) j++;
                else if(j == 3 && (st[i] == 'w' || st[i] == 'W')) j++;
                else ok = false;
            }
            if(j == 4 && ok) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}

