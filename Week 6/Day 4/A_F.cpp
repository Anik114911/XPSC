#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
int main(){
    fst
    string a,b;
    cin >> a >> b;
    vector<int> v(a.length());
    for(int i=0;i<a.length();i++) cin >> v[i];
    auto ok = [&](ll mid){
        if(mid > a.length()) return false;
        string s;
        vector<int> vec;
        for(int i=mid;i<a.length();i++){
            vec.push_back(v[i]);
        }
        sort(vec.begin(),vec.end());
        for(int i=0;i<vec.size();i++){
            s.push_back(a[vec[i]-1]);
        }
        if(s.length() < b.length()) return false;
        int i=0,j=0,cnt=0;
        while(j < b.length() && i < s.length()){
            if(s[i] == b[j]){
                i++;
                j++;
                cnt++;
            }
            else i++;
        }
        return cnt == b.length();
    };
    ll l=0,r=2e10,mid,ans=0;
    while(l <= r){
        mid = (l + r) / 2;
        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}
