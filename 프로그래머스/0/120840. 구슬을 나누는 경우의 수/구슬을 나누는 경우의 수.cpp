#include <iostream>

using namespace std;

long long combination(int n, int r) {
    if (r > n - r) r = n - r; // nCr에서 r > n-r이면 대칭 성질 이용
    long long result = 1;
    for (int i = 0; i < r; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int solution(int balls, int share) {
    return combination(balls, share);
}
