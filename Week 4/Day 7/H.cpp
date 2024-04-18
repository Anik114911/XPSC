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
        int j=n-1,c=0;
        for(int i=0;i<j;i++){
            if(s[i] != s[j]) c++;
            j--;
        }
        int r = n - (c * 2);
        int res = r + c;
        string st="";
        if(n % 2 == 0){
            bool ok = true;
            for(int i=0;i<=n;i++){
                if(i >= c && i <= res && ok){
                    st.push_back('1');
                    ok = false;
                }
                else{
                    st.push_back('0');
                    ok = true;
                }
            }
        }
        else{
            for(int i=0;i<=n;i++){
                if(i >= c && i <= res){
                    st.push_back('1');
                }
                else{
                    st.push_back('0');
                }
            }
        }
        cout << st << endl;
    }
    return 0;
}
