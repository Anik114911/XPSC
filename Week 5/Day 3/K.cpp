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
        int m = (n * (n - 1)) / 2;
        vector<int> a(m);
        vector<int> v;
        map<int,int> mp;
        set<int> s;
        int mx = INT_MIN;
        for(int i=0;i<m;i++){
            cin >> a[i];
            mx = max(mx,a[i]);
            mp[a[i]]++;
            s.insert(a[i]);
        }
        int tmp = n - 1;
        for(auto it=s.begin();it!=s.end();it++){
            while(mp[*it] > 0){
                v.push_back(*it);
                mp[*it] -= tmp;
                tmp--;
            }
        }
        while(v.size() < n){
            v.push_back(mx);
        }
        for(int x : v) cout << x << " ";
        cout << endl;
    }
    return 0;
}

