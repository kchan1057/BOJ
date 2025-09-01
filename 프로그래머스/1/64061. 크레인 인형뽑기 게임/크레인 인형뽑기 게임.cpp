#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int bomb_cnt = 0;
    stack<int> s;
    int len = moves.size();
    for(int i = 0; i < len; i++){
        for(int j  = 0 ; j < board.size(); j++){
            if(board[j][moves[i] - 1] != 0){
                if(!s.empty() && s.top() == board[j][moves[i] - 1]){
                    s.pop();
                    bomb_cnt += 2;
                    board[j][moves[i] - 1] = 0;
                    break;
                }
                else {
                    s.push(board[j][moves[i] - 1]);
                    board[j][moves[i] - 1] = 0;
                    break;
                }
            }
            else continue;
        }
    }
    return bomb_cnt;
}