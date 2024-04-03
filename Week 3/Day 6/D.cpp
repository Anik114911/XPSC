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
        string binary;
        vector<string> v;
        map<string,int> mp;
        while(n--){
            string s;
            cin >> s;
            mp[s]++;
            v.push_back(s);
        }
        bool ok = false;
        for(string x : v){
            string s1;
            ok = false;
            for(int i=0;i<x.length();i++){
                s1.push_back(x[i]);
                if(mp[s1] > 0){
                    string s2;
                    for(int j=i+1;j<x.length();j++){
                        s2.push_back(x[j]);
                        if(mp[s2] > 0 && (s1.length() + s2.length()) == x.length()){
                            binary.push_back('1');
                            ok = true;
                            break;
                        }
                    }
                    if(ok) break;
                }
            }
            if(!ok) binary.push_back('0');
        }
        cout << binary << endl;
    }
    return 0;
}


