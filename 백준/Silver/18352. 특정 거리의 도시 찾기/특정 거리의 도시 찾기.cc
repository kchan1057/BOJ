#include <bits/stdc++.h>
#define X first
#define Y second

using namespace std;
int n, m, k, x;
vector<int> adj[300005];
int dist[300005];
bool vis[300005];
int main(void){
    cin >> n >> m >> k >> x;
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
    }
    fill(dist, dist+n, -1);
    queue<int> Q;
    Q.push(x);
    dist[x] = 0;
    vis[x] = 1;
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(auto nxt : adj[cur]){
            if(vis[nxt]) continue;
            dist[nxt] = dist[cur] + 1;
            Q.push(nxt);
            vis[nxt] = 1;
        }
    }
    auto it = find(dist, dist+n+1, k);
    if(it != dist+n+1){
        for(int i = 1; i <= n; i++){
            if(dist[i] == k) cout << i << '\n';
        }
    }
    else cout << -1 << '\n';
    return 0;
}