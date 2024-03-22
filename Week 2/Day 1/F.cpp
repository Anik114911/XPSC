#include<bits/stdc++.h>
#define fst() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            int r;
            string s;
            cin >> r >> s;
            for(int j=0;j<r;j++){
                if(s[j] == 'D'){
                    a[i] += 1;
                }
                else{
                    a[i] -= 1;
                }
            }
            if(a[i] < 0){
                a[i] = a[i] + 10;
            }
            else a[i] %= 10;
        }
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}