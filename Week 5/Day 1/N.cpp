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
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        vector<int> v;
        for(int i=1;i<n;i++){
            int cnt = 0;
            v.clear();
            for(int j=0;j<n;j++){
                if(j == i){
                    if(cnt == 0) break;
                }
                else if(j < i){
                    if(a[j] < a[i] && cnt < 1){
                        cnt++;
                        v.push_back(j+1);
                    }
                }
                else if(j > i){
                    if(a[j] < a[i]){
                        cnt++;
                        v.push_back(i+1);
                        v.push_back(j+1);
                        break;
                    }
                }
            }
            if(cnt == 2 && v.size() == 3) break;
        }
        if(v.size() == 3){
            cout << "YES" << endl;
            for(int x : v){
                cout << x << " ";
            }
            cout << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
