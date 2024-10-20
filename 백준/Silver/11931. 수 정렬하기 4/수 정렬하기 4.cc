#include <bits/stdc++.h>
#include <numeric>
using namespace std;
vector<int> vc;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a; cin >> a;
    for(int i = 0; i < a; i++){
        int k; cin >> k;
        vc.push_back(k);
    }
    sort(vc.begin(), vc.end(), greater<int>());
    for(int i = 0 ; i < a; i++)
        cout << vc[i] << '\n';
    return 0;
}
