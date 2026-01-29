#include <bits/stdc++.h>
using namespace std;
int d[105][105];
int s[105][105];
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> d[i][j];
    }

    for(int i = 1; i <= n; i++){
        queue<int> Q;
        for(int j = 1; j <= n; j++){
            if(d[i][j] == 1){
                s[i][j] = 1;
                Q.push(j);
            }
        }
        while(!Q.empty()){
            auto cur = Q.front(); Q.pop();
            for(int k= 1; k <= n; k++){
                if(d[cur][k] == 1 && s[i][k] == 0){
                    s[i][k] = 1;
                    Q.push(k);
                }
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cout << s[i][j] << " ";
        cout << '\n';
    }
    return 0;
}