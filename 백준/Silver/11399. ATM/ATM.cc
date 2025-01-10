#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> vc;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        vc.push_back(a);
    }
    sort(vc.begin(), vc.end());
    int sum = 0; int count = 0;
    for(int i = 0; i < n; i++){
        count += vc[i];
        sum += count;
    }
    cout << sum << '\n';
    return 0;
}
