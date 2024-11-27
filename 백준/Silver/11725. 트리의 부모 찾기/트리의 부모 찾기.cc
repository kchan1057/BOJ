#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100001];
int ans[100001];
bool vis[100001];
int n;
int main(void)
{
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    queue<int> q;
    q.push(1); vis[1] = true; // 1번 노드에서 시작

    while (!q.empty()) {
        int cur = q.front(); q.pop();
        for (auto c : adj[cur]) {
            if (vis[c]) continue; // 이미 방문한 노드는 건너뜀
            ans[c] = cur; // 현재 노드가 자식 노드의 부모
            vis[c] = true; 
            q.push(c);
        }
    }
    for (int i = 2; i <= n; i++) // 2번 노드부터 부모 출력
        cout << ans[i] << '\n';

    return 0;
}