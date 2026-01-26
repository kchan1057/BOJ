#include <bits/stdc++.h>
using namespace std;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int k; cin >> k;
        multiset<int> ms;
        while(k--){
            char in; int n; cin >> in >> n;
            if(in == 'I') ms.insert(n);
            else if(in == 'D' && !ms.empty()){
                if(n == 1) ms.erase(prev(ms.end()));
                else ms.erase(ms.begin());  
            }
        }
        if(ms.empty()) cout << "EMPTY\n";
        else cout << *prev(ms.end()) << " " << *ms.begin() << '\n';
    }
    return 0;
}