#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    for(int i=1;i<=b;i++){
        if((c * i) > b) break;
        if((c * i) >= a && (c * i) <= b){
            cout << c * i << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}