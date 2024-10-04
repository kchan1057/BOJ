#include <bits/stdc++.h>
#define x first
#define y second 
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    deque<pair<int, int>> dq;
    int n; cin >> n;
    for(int i = 1; i <= n; i++){
        int a; cin >> a;
        dq.push_back({i, a}); //first is key, second is value.
    }
    int num = dq.front().y;
    cout << dq.front().x << " ";
    dq.pop_front();
    while(!dq.empty()){
        if(num > 0){
            for(int i = 0; i < num - 1; i++){
                int key = dq.front().x;
                int value = dq.front().y;
                dq.pop_front(); dq.push_back({key, value});
            }
            cout << dq.front().x << " ";
            num = dq.front().y; dq.pop_front();
        }
        else{
            num = -num;
            for(int i = 0; i < num - 1; i++){
                int key = dq.back().x;
                int value = dq.back().y;
                dq.pop_back(); dq.push_front({key, value});
            }
            cout << dq.back().x << " ";
            num = dq.back().y; dq.pop_back();
        }
    }
    return 0;
}