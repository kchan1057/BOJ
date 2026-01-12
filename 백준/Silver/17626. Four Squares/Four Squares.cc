#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int count = 0;
    for(int i = 1; i <= 223; i++){
        if(n == i*i){
            cout << 1;
            return 0;
        }
    }
    for(int i = 1; i <= 223; i++){
        for(int j = 1; j <= 223; j++){
            if(n == j*j + i*i){
                cout << 2;
                return 0;
            }
        }
    }
    for(int i = 1; i <= 223; i++){
        for(int j = 1; j <= 223; j++){
            for(int k = 1; k <= 223; k++){
                if(n == k*k + j*j + i*i){
                    cout << 3;
                    return 0;
                }
            }
        }
    }
    cout << 4;
    return 0;
}