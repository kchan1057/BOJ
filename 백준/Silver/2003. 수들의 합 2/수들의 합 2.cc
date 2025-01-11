#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    vector<int> vc;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        vc.push_back(a);
    }
    int sum = 0, count = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            sum += vc[j];
            if(sum == m){
                count++; sum = 0;
                break;
            }
        }
        sum = 0;
    }
    cout << count << '\n';
    return 0;
}