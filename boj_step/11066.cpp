#include <cstring>
#include <iostream>

int T, K;
int sum[501];
int dp[501][501];

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    std::cin >> T;

    while (T) {
        std::cin >> K;

        std::memset(dp, 0, sizeof(dp));
        std::memset(sum, 0, sizeof(sum));

        for (int i = 1; i <= K; i++) {
            int inp;
            std::cin >> inp;
            sum[i] = sum[i - 1] + inp;
        }

        for (int len = 1; len < K; len++) {
            for (int i = 0; i < K - len; i++) {
                int j = i + len;
                dp[i][j] = 987654321;
                for (int m = i; m < j; m++) {
                    dp[i][j] = std::min(dp[i][j], dp[i][m] + dp[m + 1][j] +
                                                      sum[j + 1] - sum[i]);
                }
            }
        }

        std::cout << dp[0][K - 1] << '\n';

        T--;
    }

    return 0;
}