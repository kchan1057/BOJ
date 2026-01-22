#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[303][303];
bool vis[303][303];
int dx[9] = {-2, -2, -1, -1, 1, 1, 2, 2};
int dy[9] = {-1, 1, -2, 2, -2, 2, -1, 1};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int x, y; cin >> x >> y;
        int k, s; cin >> k >> s;
        if(x == k && y == s) {
            cout << 0 << '\n';
            continue;
        }
        for(int i = 0; i < n; i++) {
            fill(board[i], board[i]+n, -1);
            fill(vis[i], vis[i]+n, 0);
        }
        
        queue<pair<int, int>> Q;
        Q.push({x, y});
        vis[x][y] = 1;
        board[x][y] = 0;
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            for(int dir = 0; dir < 9; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                if(vis[nx][ny]) continue;
                if(nx == k && ny == s) cout << board[cur.X][cur.Y] + 1 << '\n';
                Q.push({nx, ny});
                vis[nx][ny] = 1;
                board[nx][ny] = board[cur.X][cur.Y] + 1;
            }
        }
    }
    return 0;
}