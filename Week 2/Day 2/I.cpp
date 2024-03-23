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
        vector<int> v;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            int a;
            cin >> a;
            mp[a]++;
            v.push_back(a);
        }
        int cnt = 0;
        for(auto it = mp.begin();it != mp.end();it++){
            if(it->second > 1){
                int r = it->second - 1;
                cnt += r;
            }
        }
        if(cnt % 2 == 0){
            cout << n - cnt << endl;
        }
        else {
            cnt++;
            cout << n - cnt << endl;
        }
    }
    return 0;
}