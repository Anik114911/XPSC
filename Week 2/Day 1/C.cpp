#include<bits/stdc++.h>
#define fst() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst();
    int n,x;
    cin >> n >> x;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        v.push_back(a);
    }
    vector<int> v2;
    for(int t : v){
        if(t != x) v2.push_back(t);
    }
    for(int t : v2){
        cout << t << " ";
    }
    cout << endl;
    return 0;
}