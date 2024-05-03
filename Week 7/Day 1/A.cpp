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
        stack<char> st;
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if(st.top() != s[i]){
                    st.pop();
                    cnt++;
                }
                else st.push(s[i]);
            }
        }
        if((cnt % 2) == 0) cout << "Ramos" << endl;
        else cout << "Zlatan" << endl;
    }
    return 0;
}
