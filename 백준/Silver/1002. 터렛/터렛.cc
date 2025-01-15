#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n; // 테스트 케이스 수

    while (n--) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        // 중심 간 거리 계산
        double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        
        if (d == 0 && r1 == r2) {
            // 두 원이 동일함
            cout << "-1\n";
        } else if (d > r1 + r2 || d < abs(r1 - r2)) {
            // 두 원이 서로 떨어져 있거나 한 원이 다른 원 안에 있음
            cout << "0\n";
        } else if (d == r1 + r2 || d == abs(r1 - r2)) {
            // 두 원이 외접하거나 내접
            cout << "1\n";
        } else {
            // 두 원이 두 점에서 교차
            cout << "2\n";
        }
    }

    return 0;
}
