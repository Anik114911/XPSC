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
        int q;
        cin >> q;
        vector<int> v;
        while(q--){
            int x;
            cin >> x;
            v.push_back(x);
        }
        string s;
        int first = v[0],tmp = v[0],cnt = 0;
        s.push_back('1');
        int i=1;
        while(i < v.size()){
            if(v[i] >= tmp && v[i] >= first && cnt == 0){
                s.push_back('1');
                tmp = v[i];
            }
            else if(v[i] <= first) {
                cnt++;
                if(cnt == 1){
                    s.push_back('1');
                    tmp = v[i];
                }
                else if(cnt >= 2 && v[i] >= tmp){
                    s.push_back('1');
                    tmp = v[i];
                }
                else s.push_back('0');
            }
            else s.push_back('0');
            i++;
        }
        cout << s << endl;
    }
    return 0;
}
