#include <bits/stdc++.h>
using namespace std;

pair<int, int> s[100005];
bool compare(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second) return a.first < b.first;
    else return a.second < b.second;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 0; i < n; i++) cin >> s[i].first >> s[i].second;
    sort(s, s+n, compare);
    int count = 0, time = 0, i = 0;
    while(i < n) {
        if(s[i].first >= time){
            time = s[i].second;
            i++;
            count++;
        }
        else i++;
    }
    cout << count;
    return 0;
}