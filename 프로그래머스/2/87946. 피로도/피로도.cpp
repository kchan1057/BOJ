#include <string>
#include <vector>

using namespace std;

int m;
int len;
bool isused[9];
void dfs(int k, int t, vector<vector<int>> dungeons){
    for(int i = 0; i < dungeons.size(); i++){
        if(!isused[i] && k >= dungeons[i][0]){
            isused[i] = 1;
            dfs(k-dungeons[i][1], t+1, dungeons);
            isused[i] = 0;
        }
        if(t > m) m = t;
    }
}
int solution(int k, vector<vector<int>> dungeons) {
    dfs(k, 0, dungeons);
    return m;
}