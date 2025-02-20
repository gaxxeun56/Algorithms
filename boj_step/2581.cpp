#include <iostream>

int N, M;

int main() {
    std::cin.tie(0);
    std::cin >> M;
    std::cin >> N;

    int sum = 0;
    int min = 0;

    for (int num = M; num <= N; num++) {
        bool isSoSu = true;

        if (num == 1) {
            continue;
        }

        for (int j = 2; j < num; j++) {
            if (num % j == 0) {
                isSoSu = false;
                break;
            }
        }

        if (isSoSu) {
            sum += num;
            if (min == 0) {
                min = num;
            }
        }
    }

    if (min == 0) {
        std::cout << -1 << '\n';
        return 0;
    }

    std::cout << sum << '\n' << min << '\n';

    return 0;
}