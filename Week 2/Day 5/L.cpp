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
        int a[n];
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int mx = 0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if(it->second > mx){
                mx = it->second;
            }
        }
        if(mx == n) {
            cout << "0" << endl;
            continue;
        }
        int cnt = 0,c=0;
        int rem = n - mx;
        while(rem > 0){
            c++;
            cnt += mx;
            rem -= mx;
            mx *= 2;
        }
        if(rem < 0){
            cnt += rem;
        }
        cout << c + cnt << endl;
    }
    return 0;
}

