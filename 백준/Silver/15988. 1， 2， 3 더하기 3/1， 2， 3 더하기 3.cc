#include <iostream>
using namespace std;

constexpr int MAX = 1000010;
constexpr long long MOD = 1000000009;

int N;
long long dp[MAX];

void solveOne() {
    cin >> N;

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for (int i = 4; i <= N; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
    }

    cout << dp[N] << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        solveOne();
    }

    return 0;
}