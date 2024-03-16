#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin >> a >> b;
  int res = (b - a) + 1;
  if(res <= 0) cout << "0" << endl;
  else cout << res << endl;
  return 0;
}