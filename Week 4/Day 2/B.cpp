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
	    int a[n];
	    int j = n;
	    for(int i=0;i<n;i++){
	        a[i] = j;
	        j--;
	        cout << a[i] << " ";
	    }
	    cout << endl;
	}
    return 0;
}
