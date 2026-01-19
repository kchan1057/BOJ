#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string board[102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

int red, green, blue;
bool red1, green1, blue1;
int p1, p2;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> board[i];
    bool vis[102][102] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(vis[i][j]) continue;
            if(board[i][j] == 'R') {
                red++;
                red1 = 1;
                green1 = 0;
                blue1 = 0;
            }
            else if(board[i][j] == 'G') {
                green++;
                green1 = 1;
                red1 = 0;
                blue1 = 0;
            }
            else {
                blue++;
                blue1 = 1;
                red1 = 0;
                green1 = 0;
            }
            queue<pair<int, int>> Q;
            Q.push({i, j});
            vis[i][j] = 1;

            while(!Q.empty()){
                auto cur = Q.front(); Q.pop();
                for(int dir = 0; dir < 4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if(vis[nx][ny]) continue;
                    if(red1){
                        if(board[nx][ny] == 'G' || board[nx][ny] == 'B') continue;
                    }
                    else if(green1){
                        if(board[nx][ny] == 'R' || board[nx][ny] == 'B') continue;
                    }
                    else if(blue1){
                        if(board[nx][ny] == 'R' || board[nx][ny] == 'G') continue;
                    }
                    Q.push({nx, ny});
                    vis[nx][ny] = 1;
                }
            }
        }
    }
    p1 += (red + green + blue);
    red = 0, green = 0, blue = 0;
    red1 = 0, green1 = 0, blue1 = 0;
    bool vis2[102][102] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(vis2[i][j]) continue;
            if(board[i][j] == 'R' || board[i][j] == 'G') {
                red++;
                red1 = 1;
                green1 = 1;
                blue1 = 0;

            }
            else {
                blue++;
                blue1 = 1;
                red1 = 0;
                green1 = 0;
            }
            queue<pair<int, int>> Q;
            Q.push({i, j});
            vis[i][j] = 1;
            while(!Q.empty()){
                auto cur = Q.front(); Q.pop();
                for(int dir = 0; dir < 4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if(vis2[nx][ny]) continue;
                    if(red1){
                        if(board[nx][ny] == 'B') continue;
                    }
                    else if(blue1){
                        if(board[nx][ny] == 'R' || board[nx][ny] == 'G') continue;
                    }
                    Q.push({nx, ny});
                    vis2[nx][ny] = 1;
                }
            }
        }
    }
    p2 += (red + blue);
    cout << p1 << " " << p2 << '\n';
    return 0;
}