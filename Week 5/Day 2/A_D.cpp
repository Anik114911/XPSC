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
    sort(a.begin(),a.end());
    int k;
    cin >> k;
    while(k--){
        int left,right;
        cin >> left >> right;
        int l=0,r=n-1,mid,idx1=-1;
        while(l <= r){
            mid = (l + r) / 2;
            if(a[mid] >= left){
                idx1 = mid + 1;
                r = mid - 1;
            }
            else if(a[mid] < left){
                l = mid + 1;
            }
        }
        l=0,r=n-1;
        int idx2 = -1;
        while(l <= r){
            mid = (l + r) / 2;
            if(a[mid] <= right){
                idx2 = mid + 1;
                l = mid + 1;
            }
            else if(a[mid] > right){
                r = mid - 1;
            }
        }
        if(idx1 != -1 and idx2 != -1){  
            cout << (idx2 - idx1) + 1 << " ";
        }
        else{
            cout << "0" << endl;
        }
    }
    cout << endl;
    return 0;
}
