#include <bits/stdc++.h>
using namespace std;

int s[505][505];
int d[505][505];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++) cin >> s[i][j];
    }
    for(int i = 1; i <= n; i++) d[n][i] = s[n][i];
    
    for(int i = n-1; i > 0; i--){
        for(int j = 1; j <= n-1; j++){
            d[i][j] = max(d[i+1][j], d[i+1][j+1]) + s[i][j];
        }
    }
    cout << d[1][1] << '\n';
    return 0;
}