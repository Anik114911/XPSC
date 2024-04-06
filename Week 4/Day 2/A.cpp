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
	    int n,xr=0;
	    cin >> n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin >> a[i];
	        xr ^=a[i];
	    }
	    int ans = xr;
	    for(int i=0;i<n;i++){
	        ans = min(ans,(xr^a[i]));
	    }
	    cout << ans << endl;
	}
    return 0;
}
