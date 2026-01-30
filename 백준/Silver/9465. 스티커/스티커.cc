#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 입출력 속도 향상
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T; // 테스트 케이스 개수

    while (T--) {
        int n;
        cin >> n;

        // score[0]: 위쪽 스티커 점수, score[1]: 아래쪽 스티커 점수
        vector<vector<int>> score(2, vector<int>(n + 1));
        vector<vector<int>> dp(2, vector<int>(n + 1));

        for (int i = 0; i < 2; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> score[i][j];
            }
        }

        // 초기값 설정 (첫 번째 열)
        dp[0][1] = score[0][1];
        dp[1][1] = score[1][1];

        // DP 진행 (두 번째 열부터 n번째 열까지)
        for (int i = 2; i <= n; i++) {
            // 현재 위쪽을 고를 경우: 
            // 1. 바로 전 열의 아래쪽을 골랐거나
            // 2. 전전 열의 아래쪽을 골랐을 때 중 최댓값 선택
            dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + score[0][i];

            // 현재 아래쪽을 고를 경우:
            // 1. 바로 전 열의 위쪽을 골랐거나
            // 2. 전전 열의 위쪽을 골랐을 때 중 최댓값 선택
            dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + score[1][i];
        }

        // 마지막 열의 위/아래 중 더 큰 값이 정답
        cout << max(dp[0][n], dp[1][n]) << "\n";
    }

    return 0;
}