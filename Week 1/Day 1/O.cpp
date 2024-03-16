#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        int cnt = 0,mx=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == c && cnt == 0 && c != 'g'){
                cnt++;
            }
            else if(cnt > 0 && s[i] != 'g'){
                cnt++;
            }
            else if(cnt > 0 && s[i] == 'g'){
                mx = max(mx,cnt);
                cnt = 0;
            }
        }
        if(cnt > 0){
            for(int i=0;i<s.length();i++){
                if(s[i] != 'g'){
                    cnt++;
                }
                else break;
            }
            mx = max(cnt,mx);
        }
        cout << mx << endl;
    }
    return 0;
}