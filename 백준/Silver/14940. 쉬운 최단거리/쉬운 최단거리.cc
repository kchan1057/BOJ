#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int n, m;
int board[1002][1002];
bool check[1002][1002];
int loc[1002][1002];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    queue<pair<int, int>> q;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
            if(board[i][j] == 2){
                q.push({i, j});
                check[i][j] = 1;
            }
        }
    }
    while(!q.empty()){
        auto cur = q.front(); q.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(check[nx][ny] || board[nx][ny] == 0) continue;
            q.push({nx, ny});
            check[nx][ny] = 1;
            loc[nx][ny] = loc[cur.X][cur.Y] + 1;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(board[i][j] == 1 && !check[i][j]) cout << "-1" << " ";
            else cout << loc[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}   