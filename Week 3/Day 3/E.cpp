#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long int
#define endl '\n'
using namespace std;
int main(){
    fst
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> v(n,vector<int>(n-1));
        map<int,int> mp;
        for(int i=0;i<n;i++){
            for(int j=0;j<n-1;j++){
                cin >> v[i][j];
            }
        }
        vector<int> vec;
        int val1 = -1, val2 = -1,tmp = -1;
        for(int i=0;i<n;i++){
            mp[v[i][0]]++;
            if(mp[v[i][0]] == 1 && val1 == -1) val1 = v[i][0];
            else if(mp[v[i][0]] == 1 && val2 == -1) val2 = v[i][0];
        }
        if(mp[val1] > mp[val2]){
            vec.push_back(val1);
            tmp = val2;
        }
        else if(mp[val1] < mp[val2]){
            vec.push_back(val2);
            tmp = val1;
        }
        vec.push_back(tmp);
        for(int j=1;j<n-1;j++){
            for(int i=0;i<n;i++){
                mp[v[i][j]]++;
                if(mp[v[i][j]] == 1) tmp = v[i][j];
            }
            vec.push_back(tmp);
        }
        for(int x : vec){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}


