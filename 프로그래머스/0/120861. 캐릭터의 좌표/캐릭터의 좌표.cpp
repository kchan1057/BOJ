#include <string>
#include <vector>
using namespace std;
vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> ans(2, 0);
    for(int i = 0 ; i < keyinput.size(); i++){
        if(keyinput[i] == "left"){
            if(ans[0] <= (-1)*board[0]/2) continue;
            ans[0]--;
        }
        else if(keyinput[i] == "right"){
             if(ans[0] >= board[0]/2) continue;
            ans[0]++;
        }
        else if(keyinput[i] == "up"){
             if(ans[1] >= board[1]/2) continue;
            ans[1]++;
        }
        else if(keyinput[i] == "down"){
             if(ans[1] <= (-1)*board[1]/2) continue;
            ans[1]--;
        }
    }
    return ans;
}