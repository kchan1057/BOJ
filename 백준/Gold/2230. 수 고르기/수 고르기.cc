#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> vc;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int k; cin >> k; 
        vc.emplace_back(k);
    }
    sort(vc.begin(), vc.end());
    int minus_min = 0x7fffffff;
    for(int i = 0; i < n; i++){ 
        auto it = lower_bound(vc.begin(), vc.end(), vc[i]+m);
        if(it != vc.end()){
            if((*it-vc[i]) < minus_min) minus_min = (*it-vc[i]);
        }
    }
    cout << minus_min;
    return 0;
}