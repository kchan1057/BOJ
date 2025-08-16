#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

int zero_count, one_count;
int f[40];
void fibo(void){
    f[0] = 0; f[1] = 1;
    for(int i = 2; i <= 40; i++){
        f[i] = f[i-1] + f[i-2];
    }

}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        fibo();
        if(k == 0) cout << 1 << " " << 0 << '\n';
        else if(k == 1) cout << 0 << " " << 1 << '\n';
        else cout << f[k-1] << " " << f[k] << '\n';
    }
    return 0;
}