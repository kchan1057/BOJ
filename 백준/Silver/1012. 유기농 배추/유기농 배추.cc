#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int board[52][52];
bool vis[52][52];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int t, n, m, k;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> t; 
    while(t--)
    {
        cin >> n >> m >> k;
        for(int i = 0; i < k; i++) //  board판 채우기. 좌표별로 넣는데, x를 행 y를 열로 하니 반대로 넣어주기.
        {
            int a, b; cin >> a >> b;
            board[b][a] = 1;
        }

        int worm = 0;
        queue<pair<int, int>> Q;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(vis[i][j] || board[i][j] != 1) continue;
                worm++;
                vis[i][j] = 1;
                Q.push({i, j});
                while(!Q.empty())
                {
                    pair<int, int> cur = Q.front(); Q.pop();
                    for(int dir = 0; dir < 4; dir++)
                    {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
                        if(vis[nx][ny] || board[nx][ny] != 1) continue;
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
            }
        }
        cout << worm << '\n';
        worm = 0;
        memset(board, 0, sizeof(board));
        memset(vis, 0, sizeof(vis));
    }
    return 0;
}