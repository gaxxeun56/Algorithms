#include <bits/stdc++.h>

using namespace std;

int N;
int arr[10001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    int ans = 0;
    for (int i = 0; i < N; ++i)
    {
        if (arr[i + 2] < arr[i + 1])
        {
            int num2 = min(arr[i], arr[i + 1] - arr[i + 2]); // 두 공장에서 요만큼 구매
            arr[i] -= num2;
            arr[i + 1] -= num2;
            int num3 = min({arr[i], arr[i + 1], arr[i + 2]}); // 세 공장에서 요만큼 구매
            arr[i] -= num3;
            arr[i + 1] -= num3;
            arr[i + 2] -= num3;
            ans += 5 * num2 + 7 * num3;
            ans += 3 * arr[i]; // 남은거 사재기
            arr[i] = 0;
        }
        else
        {
            int num3 = min({arr[i], arr[i + 1], arr[i + 2]}); // 세 공장에서 요만큼 구매
            arr[i] -= num3;
            arr[i + 1] -= num3;
            arr[i + 2] -= num3;
            int num2 = std::min(arr[i], arr[i + 1]);
            arr[i] -= num2;
            arr[i + 1] -= num2;
            ans += 5 * num2 + 7 * num3;
            ans += 3 * arr[i]; // 남은거 사재기
            arr[i] = 0;
        }
    }

    cout << ans;

    return 0;
}