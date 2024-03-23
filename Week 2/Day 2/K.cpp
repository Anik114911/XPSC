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
        int o=0,c=0,cnt=0;
        for(int i=0;i<n;i++){
            if(o == c){
                o = 0;
                c = 0;
            }
            if(s[i] == '(') o++;
            else{
                if(c < o) c++;
                else cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}