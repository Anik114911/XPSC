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
    int i=0,j=0,k=0;
    int c[n+m];
    while(i < n && j < m){
        if(a[i] <= b[j]){
            c[k] = a[i];
            i++;
        }
        else if(b[j] <= a[i]){
            c[k] = b[j];
            j++;
        }
        k++;
    }
    while(i < n){
        c[k] = a[i];
        k++;
        i++;
    }
    while(j < m){
        c[k] = b[j];
        k++;
        j++;
    }
    for(int x : c){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
