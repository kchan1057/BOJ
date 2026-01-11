#include <bits/stdc++.h>
using namespace std;

int s[100005];
int n;

bool compare(int a, int b){
    return a > b;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> s[i];
    sort(s, s+n, compare);
    int max = 0;
    for(int k = 1; k <=n; k++){
        int cal = k*s[k-1];
        if(max < cal) max = cal;
    }
    cout << max;
    return 0;
}