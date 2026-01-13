#include <bits/stdc++.h>
using namespace std;

vector<int> vc;
int n, m;

long long solve(int mid){
    long long cur = 0;
    for(int i = 0; i < n; i++){
        if(vc[i] > mid) cur += (vc[i] - mid);
    }
    return cur;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int k; cin >> k; vc.emplace_back(k);
    }
    sort(vc.begin(), vc.end());
    long long st = 0, en = vc[n-1];

    while(st < en){
        long long mid = (st+en)/2;
        if(solve(mid) >= m) st = mid+1;
        else if(solve(mid) < m) en = mid;
    }
    cout << st-1;
    return 0;
}