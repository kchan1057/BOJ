#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int k; cin >> k;
    set<int> s;
    while(k--){
        string a; cin >> a;
        if(a == "add"){
            int num; cin >> num;
            s.insert(num);
        }
        else if(a == "remove"){
            int num; cin >> num;
            s.erase(num);
        }
        else if(a == "check"){
            int num; cin >> num;
            auto it = s.find(num);
            it != s.end() ? cout << 1 << '\n' : cout << 0 << '\n';
        }
        else if(a == "toggle"){
            int num; cin >> num;
            auto it = s.find(num);
            if(it != s.end()) s.erase(num);
            else s.insert(num);
        }
        else if(a == "empty"){
            s.clear();
        }
        else if(a == "all"){
            for(int i = 0; i <= 20; i++) s.insert(i);
        }
    }
    return 0;
}