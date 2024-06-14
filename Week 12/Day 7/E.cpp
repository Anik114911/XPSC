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
#define lcm(a, b) ((a * b) / gcd(a, b))
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
class cmp{
public:
    bool operator()(pair<int,int> a, pair<int,int> b){
        return a.second <= b.second;
    }
};
Infinite Void(){
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
    for(auto [x,y] : mp){
        pq.push({x,y});
    }
    int first = 0, second = 0;
    int first_val = 0, second_val = 0;
    while(!pq.empty()){
        if(!pq.empty()){
            first = pq.top().second;
            first_val = pq.top().first;
            pq.pop();
        }
        if(!pq.empty()){
            second = pq.top().second;
            second_val = pq.top().first;
            pq.pop();
        }
        else{
            cout << first << endl;
            return;
        }
        first--;
        if(first > 0) pq.push({first_val,first});
        second--;
        if(second > 0) pq.push({second_val,second});
    }
    cout << "0" << endl;
}
e4{
    fst ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; ++i)
    {
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}
