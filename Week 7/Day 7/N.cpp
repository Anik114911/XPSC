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
        int n,k;
        cin >> n >> k;
        vector<int> a(n);
        priority_queue<int,vector<int>,greater<int>> small;
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int m = k % (n + 1);
        if(m == 0){
            for(int x : a) cout << x << " ";
            cout << endl;
            continue;
        }
        for(int i=0;i<=n;i++){
            if(mp[i] == 0){
                small.push(i);
            }
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            int tmp = a[i];
            a[i] = small.top();
            small.pop();
            mp[tmp]--;
            if(mp[tmp] == 0) small.push(tmp);
        }
        if(m == 1){
            for(int x : a) cout << x << " ";
            cout << endl;
            continue;
        }
        if(small.empty()) small.push(n+1);
        for(int i=(n-m+2);i<n;i++){
            v.push_back(a[i]);

        }
        if(v.size() < n) v.push_back(small.top());
        for(int i=0;i<n;i++){
            if(v.size() == n) break;
            v.push_back(a[i]);
        }
        for(int x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}
