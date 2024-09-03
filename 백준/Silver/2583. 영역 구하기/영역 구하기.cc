#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
bool vis[101][101];
int board[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int arr[10001];
int n, m, k;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> m >> n >> k;
    int num = 0;
    queue<pair<int, int>> Q;
    for(int i = 0; i < k; i++)
    {
        int a, b, c, d; cin >> a >> b >> c >> d;
        for(int j = min(a, c); j < max(a, c); j++)
        {
            for(int k = min(b, d); k < max(b, d); k++)
            {
                if(vis[j][k] || board[j][k] == 1) continue;
                vis[j][k] = 1;
                board[j][k] = 1;
            }
        }
    }

    int s = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(vis[i][j] || board[i][j] == 1) continue;
            num++;
            Q.push({i, j});
            vis[i][j] = 1;
            while(!Q.empty())
            {
                arr[s]++;
                auto cur = Q.front(); Q.pop();
                for(int dir = 0; dir < 4; dir++)
                {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if(vis[nx][ny] || board[nx][ny] == 1) continue;
                    Q.push({nx, ny});
                    vis[nx][ny] = 1;
                }
            }
            s++;
        }
    }
    cout << num << '\n';
    sort(arr, arr+10000);
    for(int i = 0; i < 10001; i++)
    {
        if(arr[i] != 0)
            cout << arr[i] << " ";
    }
    return 0;
}