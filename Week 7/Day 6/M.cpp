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
        int n,q;
        cin >> n >> q;
        vector<int> a(n),s;
        map<int,int> mp;
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<q;i++){
            int x;
            cin >> x;
            mp[x]++;
            if(mp[x] == 1) s.push_back(x);
        }
        int m = s.size();
        for(int i=0;i<n;i++){
            int j = 0,sum = 0;
            while(j < m){
                int res = (1 << s[j]);
                if((a[i] % res) == 0){
                    a[i] += (1 << (s[j]-1));
                }
                j++;
            }
        }
        for(int x : a) cout << x << " ";
        cout << endl;
    }
    return 0;
}
