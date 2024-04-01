#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int n;
    cin >> n;
    stack<string> st;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        st.push(s);
    }
    map<string,int> mp;
    string s;
    while(!st.empty()){
        string a = st.top();
        mp[a]++;
        st.pop();
        if(mp[a] == 1){
            s.push_back(a[a.size()-2]);
            s.push_back(a[a.size()-1]);
        }
    }
    cout << s << endl;
    return 0;
}
