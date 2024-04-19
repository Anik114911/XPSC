#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
bool cmp(pair<char,int> a, pair<char,int> b){
    return a.first < b.first;
}
bool cmp2(pair<char,int> a, pair<char,int> b){
    return a.first > b.first;
}
int main(){
    fst
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int mn = abs(s[0] - s[s.length()-1]);
        int mx = max((s[0] - 'a'),(s[s.length()-1] - 'a'));
        int mns = min((s[0] - 'a'),(s[s.length()-1] - 'a'));
        vector<pair<char,int>> v;
        int cnt = 0;
        for(int i=1;i<s.length()-1;i++){
            int r = s[i] - 'a';
            if(r <= mx && r >= mns){
                v.push_back({s[i],i+1});
            }
        }
        if(mx == (s[0] - 'a')){
            sort(v.begin(),v.end(),cmp2);
        }
        else sort(v.begin(),v.end(),cmp);
        v.push_back({s[s.length()-1],s.length()});
        vector<int> a;
        a.push_back(1);
        for(auto x : v){
            a.push_back(x.second);
        }
        cout << mn << " "  << a.size() << endl;
        for(auto x : a){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}


