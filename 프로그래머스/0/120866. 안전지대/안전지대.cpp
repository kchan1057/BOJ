#include <string>
#include <vector>
using namespace std;
bool arr[102][102];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int solution(vector<vector<int>> board) {
    int n = board.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(board[i][j] == 1){
                arr[i][j] = true;
                for(int k = 0; k < 8; k++){
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if(ni >= 0 && ni < n && nj >= 0 && nj < n){
                        arr[ni][nj] = true;
                    }
                }
            }
        }
    }
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!arr[i][j]) count++;
        }
    }
    return count;
}
