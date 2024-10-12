#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> arr;
    int n, m, sum = 0; cin >> n >> m;
    for(int i = 1; i <= 45; i++){
        for(int j = 0; j < i; j++) arr.push_back(i);
    }
    for(int i = n-1; i <= m-1; i++) sum += arr[i];
    cout << sum << '\n';
    return 0;
}