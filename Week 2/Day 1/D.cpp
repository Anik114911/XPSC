#include<bits/stdc++.h>
#define fst() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst();
    string s,t;
    cin >> s;
    cin >> t;
    int i=0,cnt=0;
    while(i < s.length()){
        if(s[i] != t[i]) cnt++;
        i++;
    }
    cout << cnt << endl;
    return 0;
}