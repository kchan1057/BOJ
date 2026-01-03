#include <bits/stdc++.h>
using namespace std;

int d[12];
vector<vector<string>> vc(12);
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    d[1] = 1, d[2] = 2, d[3] = 4;
    for(int i = 4; i < 12; i++) d[i] = d[i-1] + d[i-2] + d[i-3];
    vc[1] = {"1"}, vc[2] = {"1+1", "2"}, vc[3] = {"1+1+1", "1+2", "2+1", "3"};
    for(int i = 4; i < 12; i++){
        for(int j = 0; j < vc[i-1].size(); j++) {
            vc[i].emplace_back(vc[i-1][j] + "+1");
        }
        for(int j = 0; j < vc[i-2].size(); j++) {
            vc[i].emplace_back(vc[i-2][j] + "+2");
        }
        for(int j = 0; j < vc[i-3].size(); j++) {
            vc[i].emplace_back(vc[i-3][j] + "+3");
        }
    }
    int n, k; cin >> n >> k;
    if(d[n] < k) cout << -1;
    else{
        sort(vc[n].begin(), vc[n].end());
        cout << vc[n][k-1];
    }
    return 0;
}