#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int board[52][52];
bool vis[52][52];
int dx[8] = {1, 0 ,-1, 0, -1, 1, 1, -1};
int dy[8] = {0 ,1, 0, -1, -1, 1, -1, 1};
int row, height;
int main(void)
{
    while(1)
    {
        cin >> row >> height;
        for(int i = 0; i < height ; i++)
            for(int j = 0; j < row; j++)
                cin >> board[i][j];
        if(row == 0  && height == 0) break;

        int count = 0;
        queue<pair<int, int>> Q;
        for(int i = 0; i < height; i++)
            {
                for(int j = 0; j < row ; j++)
                    {
                        if(vis[i][j] || board[i][j] != 1) continue;
                        count++;
                        vis[i][j] = 1;
                        Q.push({i, j});
                        while(!Q.empty())
                            {
                                pair<int, int> cur = Q.front(); Q.pop();
                                for(int dir = 0; dir < 8; dir++)
                                    {
                                        int nx = cur.X + dx[dir];
                                        int ny = cur.Y + dy[dir];
                                        if(nx < 0 || nx >= height || ny < 0 || ny >= row) continue;
                                        if(vis[nx][ny] || board[nx][ny] != 1) continue;
                                        vis[nx][ny] = 1;
                                        Q.push({nx, ny});       
                                    }
                            }
                    }
            }
        cout << count << '\n';
        memset(board, 0 , sizeof(board));
        memset(vis, 0, sizeof(vis));
    }
    return 0;
}