#include <bits/stdc++.h>
using namespace std;
int dist[1000002];
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    fill(dist, dist+1000001, -1);
    int n; cin >> n; 
    dist[n] = 0;
    queue<int> q; q.push(n);
    while(dist[1] == -1)
    {
        auto cur = q.front(); q.pop();
        if(cur % 3 == 0)
        {
            auto nxt = cur/3;
            if(dist[nxt] == -1){
                q.push(nxt);
                dist[nxt] = dist[cur] + 1;
            }
        }
        if(cur % 2 == 0)
        {
            auto nxt = cur / 2;
            if(dist[nxt] == -1){
                q.push(nxt);
                dist[nxt] = dist[cur] + 1;
            }
        }
        auto nxt = cur - 1;
        if(dist[nxt] == -1){
                q.push(nxt);
                dist[nxt] = dist[cur] + 1;
            } 
    }
    cout << dist[1] << '\n';
    return 0;
}