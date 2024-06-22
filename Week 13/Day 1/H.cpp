#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long 
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define e4 int32_t main()
#define Infinite void
#define PI 2.0 * acos(0.0)
using namespace std;
#ifdef LOKAL
#include "Debug_Template.h"
#else
#define HERE
#define debug(args...) 
#endif 
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

Infinite Void() {
    ll n;
    cin >> n;
    vector<ll> pwr;
    for(ll i=0;i<63;i++){
        pwr.push_back(pow(2,i));
    }
    auto convert = [&](ll n){
        vector<ll> num;
        ll tmp = n;
        while(tmp > 0){
            num.push_back(tmp % 10);
            tmp /= 10;
        }
        ll j = num.size()-1;
        for(ll i=0;i<j;i++){
            swap(num[i],num[j]);
            j--;
        }
        return num;
    };
    vector<ll> num = convert(n);
    ll mn = INT_MAX;
    for(ll i=0;i<pwr.size();i++){
        ll cnt = 0,j = 0,k = 0;
        vector<ll> cmp = convert(pwr[i]);
        while(j < cmp.size() && k < num.size()){
            if(cmp[j] == num[k]){
                j++;
                k++;
            }
            else{
                cnt++;
                k++;
            }
        }
        while(j < cmp.size()){
            cnt++;
            j++;
        }
        while(k < num.size()){
            cnt++;
            k++;
        }
        mn = min(mn,cnt);
    }
    cout << mn << endl;
}
e4{
    fst int t = 1;
    cin >> t;
    for (int i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
