#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int c = 0;
    while(true){
        c++;
        int n,q;
        cin >> n >> q;
        if(n == 0 && q == 0) break;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        sort(a.begin(),a.end());
        cout << "CASE# " << c << ":" << endl;
        while(q--) {
            int x;
            cin >> x;
            int l=0,r=n-1,mid,idx=-1;
            while(l <= r){
                mid = (l + r) / 2;
                if(a[mid] == x){
                    idx = mid + 1;
                    r = mid - 1;
                }
                else if(a[mid] > x){
                    r = mid - 1;
                }
                else if(a[mid] < x){
                    l = mid + 1;
                }
            }
            if(idx == -1){
                cout << x << " not found" << endl;
            }
            else cout << x << " found at " << idx << endl;
        }
    }
    return 0;
}
