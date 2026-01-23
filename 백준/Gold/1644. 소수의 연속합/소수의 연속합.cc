#include <bits/stdc++.h>
using namespace std;

vector<int> primes;
void isPrime(int n){
    vector<bool> state(n+1, true);
    state[0] = false, state[1] = false;
    for(int i = 2; i*i <= n; i++){
        if(!state[i]) continue;
        for(int j = i*i; j <= n; j += i){
            state[j] = false;
        }
    }
    for(int i = 2; i <= n; i++){
        if(state[i]) primes.emplace_back(i);
    }
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int count = 0, en = 0, sum = 0;
    isPrime(n);
    for(int st = 0; st < primes.size(); st++){
        while(sum < n && en < primes.size()) {
            sum += primes[en];
            en++;
        }
        if(sum == n) count++;
        sum -= primes[st];
    }
    cout << count;
    return 0;
}   