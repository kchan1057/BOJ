#include <bits/stdc++.h>
#include <cstring>
using namespace std;
bool cmp(const string &a, const string & b){
    if(a.length() != b.length()) return a.length() < b.length();
    else if(a.length() == b.length()){
        int acount = 0, bcount = 0;
        for(int i = 0; i < a.length(); i++){
            if(isdigit(a[i])) acount += a[i] - '0';
        }
        for(int i = 0; i < b.length(); i++){
            if(isdigit(b[i])) bcount += b[i] - '0';
        }
        if(acount != bcount) return acount < bcount;
    }
    return a < b;
}
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n; vector<string> vc(n);
    for(int i = 0 ; i < n; i++) cin >> vc[i];
    sort(vc.begin(), vc.end(), cmp);
    for(int i = 0 ; i < n; i++) cout << vc[i] << '\n';
    return 0;
}