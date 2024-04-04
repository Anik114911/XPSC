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
        sort(a,a+n);
        int cnt = 0;
        for(int i=0;i<n;i++){
            int val = a[i];
            if(mp[a[i]] != 0){
                cnt++;
                while(mp[val] > 0){
                    mp[val]--;
                    val++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
