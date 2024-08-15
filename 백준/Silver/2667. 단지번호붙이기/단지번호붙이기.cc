#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
int board[27][27];
bool vis[27][27];
int arr[500];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t_case = 0;
    int n; cin >> n;
    int num = 0;
    for(int i = 0; i < n; i++) 
    {
        string row;
        cin >> row;
        for(int j = 0; j < n; j++)
            board[i][j] = row[j] - '0';
    }
    queue<pair<int, int>> Q;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(vis[i][j] || board[i][j] != 1) continue;
            num++;
            vis[i][j] = 1;
            Q.push({i, j});
            int area = 0;
            while(!Q.empty())
            {
                area++;
                pair<int, int> cur = Q.front(); Q.pop();
                for(int dir = 0; dir < 4; dir++)
                {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
                    if(vis[nx][ny] || board[nx][ny] != 1) continue;
                    vis[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
            arr[t_case] = area;
            t_case++;
        }
    }
    sort(arr, arr + t_case);
    cout << num << '\n';
    for(int i = 0; i <num; i++)
        cout << arr[i] << '\n';
    return 0;
}