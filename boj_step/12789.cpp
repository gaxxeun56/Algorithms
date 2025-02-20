#include <iostream>
#include <stack>

int N;
std::stack<int> S;

int main() {
    std::ios_base::sync_with_stdio();
    std::cin.tie(0);

    int cur = 1;

    std::cin >> N;

    for (int i = 0; i < N; i++) {
        int inp;
        std::cin >> inp;

        while (!S.empty() && S.top() == cur) {
            S.pop();
            cur++;
        }

        if (inp == cur) {
            cur++;
        } else {
            S.push(inp);
        }
    }

    while (!S.empty() && S.top() == cur) {
        S.pop();
        cur++;
    }

    if (cur == N + 1) {
        std::cout << "Nice\n";
    } else {
        std::cout << "Sad\n";
    }

    return 0;
}