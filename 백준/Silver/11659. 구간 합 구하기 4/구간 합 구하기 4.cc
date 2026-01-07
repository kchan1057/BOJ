#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, T; cin >> n >> T;

    vector<int> vc(n+1); vc[0] = 0;
    for (int i = 1; i < vc.size(); i++) {
        int x; cin >> x;
        vc[i] = vc[i-1] + x;
    }
    
    while(T--){
        int i, j; cin >> i >> j;
        cout << vc[j] - vc[i-1] << '\n';
    }
    return 0;
}