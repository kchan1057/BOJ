#include <bits/stdc++.h>
using namespace std;
bool vis[100001];
vector<int> adj[100001];
int order[100001];
int cnt = 0;
void dfs(int x)
{
    vis[x] = true;
    cnt++;
    order[x] = cnt;
    for(int i = 0; i < adj[x].size();i++){
        int y = adj[x][i];
        if(!vis[y])
            dfs(y);
    }
}
int n, m ,v;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> v;
    for(int i = 0; i < m; i++)
    {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 1; i <= n; i++)
        sort(adj[i].begin(), adj[i].end(), greater<>());
    dfs(v);
    for(int i =  1; i <= n; i++)
        cout << order[i] << '\n';
    return 0;
}