#include <bits/stdc++.h>
using namespace std;

vector<int> primes;
void isPrime(int n, int m){
    vector<bool> states(m+1, true);
    states[1] = false;
    for(int i = 2; i*i <= m; i++){
        if(!states[i]) continue;
        for(int j = i*i; j <= m; j += i) states[j] = false;
   }
   for(int i = n; i <= m; i++){
    if(states[i]) primes.emplace_back(i);
   }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    isPrime(n, m);
    for(int p : primes) cout << p << " ";
    return 0;
}   