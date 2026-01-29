#include <bits/stdc++.h>
using namespace std;

vector<int> adj[55];
int score[55];
int main() {
    int n; cin >> n;

    while(1){
        int a, b; cin >> a >> b;
        if(a == -1 && b == -1) break;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for(int i = 1; i <= n; i++){
        bool vis[55] = {}; int dist[55] = {};
        vis[i] = 1; dist[i] = 0;
        queue<int> Q; Q.push(i);
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            for(auto nxt : adj[cur]){
                if(vis[nxt]) continue;
                vis[nxt] = 1;
                Q.push(nxt);
                dist[nxt] = dist[cur]+1;
            }
        }
        dist[i] = 1;
        if((*min_element(dist+1, dist+n+1)) == 0) score[i] = 0;
        else score[i] = *max_element(dist+1, dist+n+1);
    }
    int min_score = *min_element(score+1, score+n+1);
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(score[i] == min_score) count++;
    }
    cout << min_score << " " << count << '\n';
    for(int i = 1; i <= n; i++){
        if(score[i] == min_score) cout << i << " ";
    }
    return 0;
}