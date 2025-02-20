#include <deque>
#include <iostream>

int N, M, inp;
int A[100001];
std::deque<int> Q;

int main() {
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    std::cin >> N;

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        std::cin >> inp;
        if (A[i] == 0) {
            Q.push_front(inp);
        }
    }

    std::cin >> M;

    for (int i = 0; i < M; i++) {
        std::cin >> inp;
        Q.push_back(inp);

        std::cout << Q.front() << ' ';
        Q.pop_front();
    }
    std::cout << '\n';

    return 0;
}