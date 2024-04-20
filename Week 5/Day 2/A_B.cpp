#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int n,k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    while(k--){
        int x;
        cin >> x;
        int l=0,r=n-1,idx=0,mid;
        while(l <= r){
            mid = (l + r) / 2;
            if(a[mid] <= x){
                idx = mid+1;
                l = mid + 1;
            }
            else if(a[mid] > x){
                r = mid - 1;
            }
        }
        cout << idx << endl;
    }
    return 0;
}
