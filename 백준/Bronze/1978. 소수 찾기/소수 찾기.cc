#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if(x == 1) return 0;
    for(int i = 2; i*i <= x; i++){
        if(x%i == 0) return 0;
    }
    return 1;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int count = 0;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int k; cin >> k;
        if(isPrime(k)) count++;
    }
    cout << count << '\n';
    return 0;
}   