#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        int l = 0,r = n - 1,mid,val1 = -1;
        while(l <= r){
            mid = (l + r) / 2;
            if(a[mid] < x){
                val1 = a[mid];
                l = mid + 1;
            }
            else if(a[mid] >= x){
                r = mid - 1;
            }
        }
        l = 0,r = n - 1;
        int val2 = -1;
        while(l <= r){
            mid = (l + r) / 2;
            if(a[mid] > x){
                val2 = a[mid];
                r = mid - 1;
            }
            else if(a[mid] <= x){
                l = mid + 1;
            }
        }
        if(val1 == -1 && val2 == -1){
            cout << "X X" << endl;
        }
        else if(val1 == -1){
            cout << "X " << val2 << endl;
        }
        else if(val2 == -1){
            cout << val1 << " X" << endl;
        }
        else{
            cout << val1 << " " << val2 << endl;
        }
    }
    return 0;
}
