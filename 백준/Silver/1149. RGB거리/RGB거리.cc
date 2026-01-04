#include <bits/stdc++.h>
using namespace std;

int d[1010][3];
int s[1010][3];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++) cin >> s[i][j];
    }
    
    d[0][0] = s[0][0], d[0][1] = s[0][1], d[0][2] = s[0][2];

    for(int i = 1; i < n; i++){
        d[i][0] = min(d[i-1][1], d[i-1][2]) + s[i][0];
        d[i][1] = min(d[i-1][0], d[i-1][2]) + s[i][1];
        d[i][2] = min(d[i-1][0], d[i-1][1]) + s[i][2];
    }
    cout << min({d[n-1][0], d[n-1][1], d[n-1][2]}) << '\n';

    return 0;
}