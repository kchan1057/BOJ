#include <bits/stdc++.h>
using namespace std;
vector<int> vc;
int main(void){   
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n; // 약수의 개수
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        vc.push_back(a);
    }
    sort(vc.begin(), vc.end());
    int ans = vc[0] * vc[vc.size() - 1];
    cout << ans << '\n';
    return 0;
}