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
        string s;
        cin >> s;
        char c,ch;
        int j = n - 1;
        bool ok = true;
        for(int i=0;i<j;i++){
            if(s[i] != s[j]){
                c = s[i];
                ch = s[j];
                ok = false;
                break;
            }
            j--;
        }
        if(ok){
            cout << "0" << endl;
            continue;
        }
        ok = true;
        j = n - 1;
        int i = 0,cnt = 0,mn = INT_MAX;
        while(i < j){
            if(s[i] != s[j]){
                if(s[i] == c){
                    cnt++;
                    i++;
                }
                else if(s[j] == c){
                    j--;
                    cnt++;
                }
                else{
                    ok = false;
                    break;
                }
            }
            else {
                i++;
                j--;
            }
        }
        mn = min(mn,cnt);
        i = 0, j = n - 1,cnt = 0;
        bool ok2 = true;
        while(i < j){
            if(s[i] != s[j]){
                if(s[i] == ch){
                    cnt++;
                    i++;
                }
                else if(s[j] == ch){
                    j--;
                    cnt++;
                }
                else{
                    ok2 = false;
                    break;
                }
            }
            else {
                i++;
                j--;
            }
        }
        if(!ok && !ok2) cout << "-1" << endl;
        else if(ok && ok2) cout << min(mn,cnt) << endl;
        else if(ok) cout << mn << endl;
        else cout << cnt << endl;
    }
    return 0;
}
