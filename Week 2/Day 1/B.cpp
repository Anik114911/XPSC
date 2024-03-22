#include<bits/stdc++.h>
#define fst() (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst();
    int k,s,cnt=0;
    cin >> k >> s;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            int r = i + j;
            int res = s - r;
            if(res >= 0 && res <= k){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}