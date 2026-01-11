#include <bits/stdc++.h>
using namespace std;

long long d[1000005];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    d[0] = 0, d[1] = 1;
    for(int i = 2; i <= abs(n); i++) d[i] = (d[i-1] + d[i-2])%1000000000;
    if(n >= 0){
        if(n == 0) cout << 0 << '\n' << 0;
        else cout << 1 << '\n' << d[n];
    }
    else{
        if(n % 2 == 0) cout << -1 << '\n' << d[n*(-1)];
        else cout << 1 << '\n' << d[n*(-1)];
    }
    return 0;
}