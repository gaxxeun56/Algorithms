#include <iostream>

int A, B, V;
int main() {
    std::cin.tie(0);
    std::cin >> A >> B >> V;

    int oneDay = A - B;

    if ((V - A) % oneDay == 0) {
        std::cout << ((V - A) / oneDay) + 1 << '\n';
    } else {
        std::cout << ((V - A) / oneDay) + 2 << '\n';
    }
}