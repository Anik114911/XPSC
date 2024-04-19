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
        string s,st;
        cin >> s;
        for(int i=n-1;i>=0;i--){
            if(s[i] == '0'){
                int c = s[i-1] - '0';
                int ch = s[i-2] - '0';
                ch *= 10;
                ch += c;
                char al = (ch + 'a') - 1;
                st.push_back(al);
                i -= 2;
            }
            else{
                int num = s[i] - '0';
                char al = (num + 'a') - 1;
                st.push_back(al);
            }
        }
        reverse(st.begin(),st.end());
        cout << st << endl;
    }
    return 0;
}
