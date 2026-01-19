#include <bits/stdc++.h>
using namespace std;
vector<int> adj[102];
int bacon[102];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 1; i <= n; i++){
        queue<int> q;
        bool vis[102] = {};
        int s[102] = {};
        q.push(i); vis[i] = 1;
        while(!q.empty()){
            int cur = q.front(); q.pop();
            for(int next : adj[cur]){
                if(vis[next]) continue;
                vis[next] = 1;
                q.push(next);
                s[next] = s[cur] + 1;
            }
        }
        for(int j = 1; j <= n; j++) bacon[i] += s[j];
    }
    int min = 0x7fffffff, num = 0;
    for(int i = 1; i <= n; i++){
        if(min > bacon[i]){
            min = bacon[i]; num = i;
        }
    }
    cout << num;
    return 0;
}