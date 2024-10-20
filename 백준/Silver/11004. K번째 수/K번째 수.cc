#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k;
    vector<int> vc;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        vc.push_back(a);
    }
    sort(vc.begin(), vc.end());
    cout << vc[k-1] << '\n';
    return 0;
}