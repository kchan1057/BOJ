#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    int k; cin >> k;
    vector<int> vc(k+1);
    vector<int> dp(k+1, 1);
    for(int i = 1 ; i <= k; i++){
        int t; cin >> t;
        vc[i] = t;
    }
    int t = 1;
    for(int i = 1; i <= k; i++){
        for(int j = 1; j <= i-1; j++){
            if(vc[i] > vc[j]){
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
        t = max(dp[i], t);
    }
    cout << t << '\n';
    return 0;
}