#include <vector>
#include <queue>
#include <algorithm>
#define X first
#define Y second
using namespace std;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int dist[102][102];
int board[102][102];

int solution(vector<vector<int>> maps) {
    int n = maps.size(), m = maps[0].size();;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) board[i][j] = maps[i][j];
    }
    for(int i = 0; i < n; i++) fill(dist[i], dist[i] + m, -1);
    queue<pair<int, int>> Q;
    Q.push({0, 0}); dist[0][0] = 1;
    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int i = 0; i < 4; i++){
            int nx = dx[i] + cur.X;
            int ny = dy[i] + cur.Y;
            
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(dist[nx][ny] != -1 || board[nx][ny] == 0) continue;
            Q.push({nx, ny});
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
        }
    }
    return dist[n-1][m-1] != -1 ? dist[n-1][m-1] : -1;
}
