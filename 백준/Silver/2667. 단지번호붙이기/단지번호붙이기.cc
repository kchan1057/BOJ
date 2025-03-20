#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define X first
#define Y second
using namespace std;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
char board[27][27];
bool check[27][27];
int main(void){
    int k; cin >> k; vector<int> vc;
    for(int i = 0; i < k; i++){
        string st; cin >> st;
        for(int j = 0; j < st.size(); j++) board[i][j] = st[j];
    }
    queue<pair<int, int>> Q;
    int count_dan = 0, count_house;
    for(int i = 0; i < k; i++){
        for(int j = 0; j < k; j++){
            if(board[i][j] == '0' || check[i][j]) continue;
            Q.push({i, j});
            check[i][j] = true;
            count_dan++;
            while(!Q.empty()){
                count_house++;
                auto cur = Q.front(); Q.pop();
                for(int i = 0; i < 4; i++){
                    int nx = dx[i] + cur.X;
                    int ny = dy[i] + cur.Y;

                    if(nx < 0 || nx >= k || ny < 0 || ny >= k) continue;
                    if(board[nx][ny] == '0' || check[nx][ny]) continue;
                    Q.push({nx, ny});
                    check[nx][ny] = true;
                }
            }
            vc.push_back(count_house);
            count_house = 0;
        }
    }

    sort(vc.begin(), vc.end());
    cout << count_dan << '\n';
    for(int i = 0; i < vc.size(); i++) cout << vc[i] << '\n';
}