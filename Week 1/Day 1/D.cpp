#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    while(n != 0){
        int r = n % 10;
        char c = r + '0';
        s.push_back(c);
        n /= 10;
    }
    while(s.length() < 4){
        s.push_back('0');
    }
    reverse(s.begin(),s.end());
    cout << s << endl;
    return 0;
}