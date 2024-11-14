#include <bits/stdc++.h> 
using namespace std;
unordered_set<string> st;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    while(n--){
        string a, b; cin >> a >> b;
        if(b == "enter") st.insert(a);
        else if(b == "leave") st.erase(a);
    }
    vector<string> ans(st.begin(), st.end());
    sort(ans.begin(), ans.end(), greater<string>());
    for(auto c : ans) cout << c << '\n';
    return 0;
}