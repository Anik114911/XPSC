#include<bits/stdc++.h>
#define fst ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL);
#define ll long long 
#define endl '\n'
using namespace std;
const ll N = 2e5 + 5;
bool vis[N];
ll cnt[N];
void dfs(ll src,vector<ll> adj[]){
    vis[src] = true;
    for(ll x : adj[src]){
        if(!vis[x]){
            dfs(x,adj);
            cnt[src] += cnt[x];
        }
        else {
            if(cnt[src] == 0 && adj[src].size() == 1 && src != 1) cnt[src] = 1;
        }
    }
}
int main(){
    fst
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> adj[n+1];
        for(ll i=0;i<n-1;i++){
            ll x,y;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        memset(vis,false,sizeof(vis));
        memset(cnt,0,sizeof(cnt));
        dfs(1,adj);
        ll q;
        cin >> q;
        while(q--){
            ll a,b;
            cin >> a >> b;
            cout << (cnt[a] * cnt[b]) << endl;
        }
    }
    return 0;
}
