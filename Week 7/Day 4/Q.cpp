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
        int zero=0,one=0;
        string s,st;
        cin >> s;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i] == '0') zero++;
            else one++;
        }
        if(one == zero){
            cout << "0" << endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                if(zero > 0){
                    st.push_back('0');
                    zero--;
                }
                else st.push_back('1');
            }
            else {
                if(one > 0){
                    st.push_back('1');
                    one--;
                }
                else st.push_back('0');
            }
        }
        int idx = n;
        for(int i=0;i<n;i++){
            if(s[i] == st[i]){
                idx = i;
                break;
            }
        }
        cout << n - idx << endl;
    }
    return 0;
}
