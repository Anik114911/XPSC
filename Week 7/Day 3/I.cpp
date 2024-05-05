#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int n;
    cin >> n;
    string s;
    int cnt = 0;
    for(int i=0;i<n;i++){
        cnt++;
        if(cnt > 4) cnt = 1;
        if(cnt == 1 || cnt == 2){
            s.push_back('a');
        }
        else if(cnt == 3 || cnt == 4){
            s.push_back('b');
        }
    }
    cout << s << endl;
    return 0;
}
