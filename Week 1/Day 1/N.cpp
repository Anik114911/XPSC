#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n],f[100005]={0};
    for(int i=0;i<n-1;i++){
        cin >> a[i];
        f[a[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(f[i] == 0){
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}