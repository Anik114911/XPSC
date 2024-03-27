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
        int j=n-1,val1,val2;
        bool ok = true;
        for(int i=0;i<j;i++){
            if(a[i] != a[j]){
                ok = false;
                val1 = a[i];
                val2 = a[j];
                break;
            }
            j--;
        }
        if(ok){
            cout << "YES" << endl;
            continue;
        }
        vector<int> v1;
        vector<int> v2;
        for(int x : a) if(x != val1) v1.push_back(x); 
        for(int x : a) if(x != val2) v2.push_back(x);
        j = v1.size()-1;
        bool ok1 = true;
        bool ok2 = true;
        for(int i=0;i<j;i++){
            if(v1[i] != v1[j]){
                ok1 = false;
                break;
            }
            j--;
        }
        j = v2.size()-1;
        for(int i=0;i<j;i++){
            if(v2[i] != v2[j]){
                ok2 = false;
                break;
            }
            j--;
        }
        if(ok1 || ok2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}