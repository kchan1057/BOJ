#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){
    int k; cin >> k;
    while(k--){
        int a, b;
        cin >> a >> b;
        a %= 10; // 일의 자리만 보면 됨

        // 주기 저장
        vector<int> cycle;
        int current = a;

        while (true) {
            if (find(cycle.begin(), cycle.end(), current) != cycle.end()) break;
            cycle.push_back(current);
            current = (current * a) % 10;
        }

        int index = (b - 1) % cycle.size();
        int result = cycle[index];
        cout << (result == 0 ? 10 : result) << '\n';
    }
    return 0;
}
