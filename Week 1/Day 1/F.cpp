#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,t;
    cin >> a >> b >> t;
    int m = t / a;
    if(m == 0){
        cout << "0" << endl;
        return 0;
    }
    cout << m * b << endl;
    return 0;
}