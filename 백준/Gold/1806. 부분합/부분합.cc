#include <bits/stdc++.h>
using namespace std;

int n, s;
vector<int> vc;
int main() {
    ios::sync_with_stdio(0);
    cin >> n >> s;
    for(int i = 0; i < n; i++){
        int k; cin >> k;
        vc.emplace_back(k);
    }

    int en = 0, sum = 0, len = 0x7fffffff;
    for(int st = 0; st < n; st++){
        while(en < n && sum < s){
            sum += vc[en];
            en++;
        }
        if(sum >= s) len = min(len, en-st);
        sum -= vc[st];
    }
    if(len == 0x7fffffff) cout << 0;
    else cout << len;
    return 0;
}