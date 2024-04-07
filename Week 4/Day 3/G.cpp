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
        int a[n],r=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            r |= a[i];
        }
        cout << r << endl;
    }
    return 0;
}
