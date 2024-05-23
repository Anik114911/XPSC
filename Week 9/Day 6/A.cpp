#include<bits/stdc++.h>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long 
#define endl '\n'
#define e4 int main()
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define PI 2.0 * acos(0.0)
using namespace std;

void limitless(){
    
}
e4{
    fst int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    int l = 0,r = 0,length = 0,mx = INT_MIN;
    map<int,int> mp;
    while(r < n){
        mp[a[r]]++;
        if(mp[a[r]] == 1){
            length++;
            mx = max(mx,length);
        }
        else{
            while(l <= r){
                mp[a[l]]--;
                if(mp[a[l]] == 1) {
                    l++;
                    break;
                }
                l++;
                length--;
            }
        }
        r++;
    }
    cout << mx << endl;
    return 0;
}
