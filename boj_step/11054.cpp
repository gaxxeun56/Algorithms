#include <iostream>

int N;
int A[1001];
int dp[1001][2];

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    std::cin >> N;

    int ans = 1;

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];

        int maxInc = 0;
        int maxDec = 0;

        for (int j = 0; j < i; j++) {
            if (A[j] < A[i]) {
                maxInc = std::max(maxInc, dp[j][0]);
            } else if (A[j] > A[i]) {
                maxDec = std::max(maxDec, std::max(dp[j][0], dp[j][1]));
            }
        }
        dp[i][0] = maxInc + 1;
        dp[i][1] = maxDec + 1;
        ans = std::max(ans, std::max(dp[i][0], dp[i][1]));
    }

    std::cout << ans << '\n';

    return 0;
}