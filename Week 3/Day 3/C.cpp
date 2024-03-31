#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long int
#define endl '\n'
using namespace std;
int n,m;
bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m) return false;
    return true;
}
int main(){
    fst
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        vector<vector<int>> a(n,vector<int> (m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> a[i][j];
            }
        }
        int sum = 0;
        int k,l,mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                sum = 0;
                k = i;
                l = j;
                sum += a[k][l];
                k--;
                l--;
                while(valid(k,l)){
                    sum += a[k][l];
                    k--;
                    l--;
                }
                k = i;
                l = j;
                k--;
                l++;
                while(valid(k,l)){
                    sum += a[k][l];
                    k--;
                    l++;
                }
                k = i;
                l = j;
                k++;
                l++;
                while(valid(k,l)){
                    sum += a[k][l];
                    k++;
                    l++;
                }
                k = i;
                l = j;
                k++;
                l--;
                while(valid(k,l)){
                    sum += a[k][l];
                    k++;
                    l--;
                }
                mx = max(mx,sum);
            }
        }
        cout << mx << endl;
    }
    return 0;
}
