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
        int n,m,x;
        cin >> n >> m >> x;
        set<int> s;
        s.insert(x);
        for(int i=0;i<m;i++){
            int r;
            char c;
            cin >> r >> c;
            set<int> tmp;
            if(c == '0'){
                for(auto v : s){
                    int res = v + r;
                    res %= n;
                    if(res == 0){
                        tmp.insert(n);
                    }
                    else{
                        tmp.insert(res);
                    }
                }
            }
            else if(c == '1'){
                for(int v : s){
                    int res = n + v - r;
                    res %= n;
                    if(res == 0){
                        tmp.insert(n);
                    }
                    else tmp.insert(res);
                }
            }
            else{
                for(auto v : s){
                    int res = v + r;
                    res %= n;
                    if(res == 0){
                        tmp.insert(n);
                    }
                    else{
                        tmp.insert(res);
                    }
                    res = n + v - r;
                    res %= n;
                    if(res == 0){
                        tmp.insert(n);
                    }
                    else tmp.insert(res);
                }
            }
            s = tmp;
        }
        cout << s.size() << endl;
        for(auto x : s) cout << x << " ";
        cout << endl;
    }
    return 0;
}
