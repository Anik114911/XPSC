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
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int mx = INT_MIN;
        for(int i=1;i<n;i++){
            mx = max(mx,(a[i]-a[0]));
        }
        for(int i=0;i<n-1;i++){
            mx = max(mx,(a[n-1]-a[i]));
        }
        for(int i=0;i<n-1;i++){
            mx = max(mx,(a[i]-a[i+1]));
        }
        if(n == 1) mx = 0;
        cout << mx << endl;
    }
    return 0;
}

