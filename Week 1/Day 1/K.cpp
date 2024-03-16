#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cin.ignore();
        map<string,int> mp;
        vector<string> a(n);
        vector<string> b(n);
        vector<string> c(n);
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            mp[s]++;
            a.push_back(s);
        }
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            mp[s]++;
            b.push_back(s);
        }
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            mp[s]++;
            c.push_back(s);
        }
        int p1=0,p2=0,p3=0;
        for(string x : a){
            if(mp[x] == 1){
                p1 += 3;
            }
            else if(mp[x] == 2){
                p1 += 1;
            }
        }
        for(string x : b){
            if(mp[x] == 1){
                p2 += 3;
            }
            else if(mp[x] == 2){
                p2 += 1;
            }
        }
        for(string x : c){
            if(mp[x] == 1){
                p3 += 3;
            }
            else if(mp[x] == 2){
                p3 += 1;
            }
        }
        cout << p1 << " " << p2 << " " << p3 << endl;
    }
    return 0;
}