#include <bits/stdc++.h>
using namespace std;

int d[128][128];
int white, blue;

void cal(int n, int x, int y){
    int color = d[x][y];
    bool same = true;
    for(int i = x; i < x+n; i++){
        for(int j = y; j < y+n; j++){
            if(color != d[i][j]){
                same = false;
                break;
            }
        }
        if(!same) break;
    }

    if(same){
        if(color == 0) white++;
        else blue++;
        return;
    }

    int half = n/2;
    cal(half, x, y);
    cal(half, x+half, y);
    cal(half, x, y+half);
    cal(half, x+half, y+half);

}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin >> d[i][j];
    }
    cal(n, 0, 0);
    cout << white << '\n' << blue << '\n';
    return 0;
}   