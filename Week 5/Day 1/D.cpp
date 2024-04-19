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
        int a,b,c;
        cin >> a >> b >> c;
        a -= 1;
        if(c > b){
            int r = c - b;
            c -= 1;
            b = c + r;
        }
        else{
            int r = b - c;
            c -= 1;
            b = c + r;
        }
        if(a < b) cout << "1" << endl;
        else if(a > b) cout << "2" << endl;
        else cout << "3" << endl;
    }
    return 0;
}
