#include <iostream>

int X;

int main() {
    std::cin.tie(0);

    std::cin >> X;

    int count = 1;
    for (int i = 1; i <= 10001; i++) {
        if (i % 2) {
            for (int j = 1; j <= i; j++) {
                if (count == X) {
                    std::cout << i - j + 1 << '/' << j << '\n';
                    return 0;
                }
                count++;
            }
        } else {
            for (int j = 1; j <= i; j++) {
                if (count == X) {
                    std::cout << j << '/' << i - j + 1 << '\n';
                    return 0;
                }
                count++;
            }
        }
    }

    return 0;
}