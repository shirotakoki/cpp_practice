#include <iostream>

using namespace std;
int main()
{
    int K, S;
    cin >> K >> S;

    int cnt = 0;
    for (int i = 0; i <= K; i++)
    {
        for (int j = 0; j <= K; j++)
        {
            if (S - (i + j) <= K && S - (i + j) >= 0)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
