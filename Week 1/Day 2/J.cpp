#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int tmp = a;
    while(tmp <= c){
        if((c - tmp) % b == 0){
            cout << "Yes" << endl;
            return 0;
        }
        else if(tmp == c){
            cout << "Yes" << endl;
            return 0;
        }
        else tmp += a;
    }
    tmp = b;
    while(tmp <= c){
        if((c - tmp) % a == 0){
            cout << "Yes" << endl;
            return 0;
        }
        else if(tmp == c){
            cout << "Yes" << endl;
            return 0;
        }
        else tmp += b;
    }
    cout << "No" << endl;
    return 0;
}

