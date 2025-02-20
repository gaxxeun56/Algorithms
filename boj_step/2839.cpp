#include <iostream>

int N;
int main() {
    std::cin >> N;
    int max3 = N / 3;

    int answer = 5000;

    for (int i = 0; i <= max3; i++) {
        if ((N - i * 3) % 5 == 0) {
            answer = std::min(answer, i + (N - i * 3) / 5);
        }
    }

    if (answer == 5000) {
        std::cout << -1 << '\n';
        return 0;
    }

    std::cout << answer << '\n';
    return 0;
}