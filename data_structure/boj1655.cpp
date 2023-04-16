#include <iostream>
#include <queue>
#include <vector>

int N;
std::priority_queue<int> left;
std::priority_queue<int, std::vector<int>, std::greater<int>> right;

int main()
{
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(0);

    std::cin >> N;

    for (int i = 0; i < N; i++)
    {
        int inp;
        std::cin >> inp;
        if (left.size() == right.size())
        {
            left.push(inp);
        }
        else
        {
            right.push(inp);
        }

        if (right.size() != 0 && left.top() > right.top())
        {
            int val1 = left.top();
            int val2 = right.top();
            left.pop();
            right.pop();
            left.push(val2);
            right.push(val1);
        }

        std::cout << left.top() << '\n';
    }

    return 0;
}
