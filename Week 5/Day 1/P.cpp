#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    int cnt = 0;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int i=0,j=0;
    while(i<n && j<m){
        if(a[i] == b[j]){
            cnt++;
            i++;
            j++;
        }
        else if(a[i]-1 == b[j]){
            cnt++;
            i++;
            j++;
        }
        else if(a[i]+1 == b[j]){
            cnt++;
            i++;
            j++;
        }
        else{
            if(a[i] <= b[j]) i++;
            else j++;
        }
    }
    cout << cnt << endl;

    return 0;
}
