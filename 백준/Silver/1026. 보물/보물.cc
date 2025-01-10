#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<int> vc1, vc2;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        vc1.push_back(a);
    }
    sort(vc1.begin(), vc1.end());
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        vc2.push_back(a);
    }
    sort(vc2.begin(), vc2.end(), greater<int>());
    int minsum = 0;
    for(int i = 0; i < n; i++)
        minsum += vc1[i] * vc2[i];
    cout << minsum << '\n';
    return 0;
}