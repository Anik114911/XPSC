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
        string str;
        cin >> str;
        stack<int> b,s;
        for(int i=0;i<str.length();i++){
            if(str[i] >= 'A' && str[i] <= 'Z'){
                if(str[i] != 'B') b.push(i);
                else if(!b.empty()) b.pop();
            }
            else{
                if(str[i] != 'b') s.push(i);
                else if(!s.empty()) s.pop();
            }
        }
        string st;
        vector<int> v;
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        while(!b.empty()){
            v.push_back(b.top());
            b.pop();
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            st.push_back(str[v[i]]);
        }
        cout << st << endl;
    }
    return 0;
}
