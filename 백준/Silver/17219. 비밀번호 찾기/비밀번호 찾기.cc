#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m; cin >> n >> m;
    string site, password;
    map<string, string> mp;
    for(int i = 0; i < n; i++){
        cin >> site >> password;
        mp[site] = password;
    }
    for(int i = 0; i < m; i++){
        cin >> site;
        cout << mp[site] << '\n';
    }
    return 0;
}