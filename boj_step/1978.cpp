#include <iostream>

int N;

int main() {
    std::cin.tie(0);
    std::cin >> N;

    int ans = 0;

    for (int i = 0; i < N; i++) {
        int num;
        std::cin >> num;

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

        if (isSoSu) ans++;
    }

    std::cout << ans << '\n';

    return 0;
}