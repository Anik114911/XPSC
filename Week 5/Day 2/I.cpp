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
        string s,st;
        cin >> s;
        cin >> st;
        int cnt = 0,idx1=-1,idx2=-1,mx=0;
        for(int i=0;i<s.length();i++){
            cnt = 0;
            int tmp = i;
            for(int j=0;j<st.length();j++){
                if(s[tmp] == st[j]){
                    cnt++;
                    tmp++;
                }
                else if(cnt > 0){
                    cnt=0;
                    j-=(tmp - i);
                    tmp = i;
                }
                if(cnt > mx){
                    mx = cnt;
                    idx1 = i;
                    idx2 = tmp-1;
                }
            }
        }
        if(idx1 == -1 && idx2 == -1){
            cout << s.length()+st.length() << endl;
            continue;
        }
        int res1 = (idx1 - 0) + ((s.length()-1) - idx2);
        string common;
        for(int i=idx1;i<=idx2;i++){
            common.push_back(s[i]);
        }
        int j=0;
        for(int i=0;i<st.length();i++){
            int tmp = i;
            while(tmp < st.length() && st[tmp] == common[j]){
                j++;
                tmp++;
            }
            if(j == common.length()){
                idx1 = i;
                idx2 = tmp-1;
                break;
            }
            else j=0;
        }
        int res2 = (idx1 - 0) + ((st.length()-1) - idx2);
        cout << (res1 + res2) << endl;
    }
    return 0;
}
