#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

pair<int, int> jewel[300003];
multiset<int> bag;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> jewel[i].Y >> jewel[i].X;
    sort(jewel, jewel+n);
    for(int i = 0; i < k; i++){
        int t; cin >> t;
        bag.insert(t);
    }
    long long ans = 0;
    for(int i = n-1; i >= 0; i--){
        int m, v;
        tie(v, m) = jewel[i];
        auto it = bag.lower_bound(m);
        if(it == bag.end()) continue;
        ans += v;
        bag.erase(it);
    }
    cout << ans << '\n';
    return 0;
}