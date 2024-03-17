#include<bits/stdc++.h>
#define fst() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst();
    int n,m;
    cin >> n >> m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    int i = 0,j = 0,cnt = 0;
    while(j < m){
        while(b[j] > a[i] && i < n){
            cnt++;
            i++;
        }
        cout << cnt << " ";
        j++;
    }
    return 0;
}