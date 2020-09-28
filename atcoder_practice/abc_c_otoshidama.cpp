#include <iostream>

using namespace std;
enum
{
    x10 = 10000,
    x5 = 5000,
    x1 = 1000,
};
bool check(int x, int y, int z, int N, long Y)
{
    bool isPositive = ((x >= 0) && (y >= 0) && (z >= 0));
    bool checkN = ((x + y + z - N) == 0);
    bool checkY = ((x * x10 + y * x5 + z * x1 - Y) == 0);

    return isPositive && checkN && checkY;
}

void calcY(int &x, int &y, int &z, int N, long Y)
{
    for (x = 0; x <= N; x++)
    {
        for (y = 0; y <= N; y++)
        {
            z = N - x - y;
            if (check(x, y, z, N, Y))
                return;
        }
    }
}

int main()
{
    int N;
    long Y;
    cin >> N >> Y;
    int x, y, z;
    x = -1;
    y = -1;
    z = -1;

    calcY(x, y, z, N, Y);

    if (check(x, y, z, N, Y))
        cout << x << " " << y << " " << z;
    else
        cout << -1 << " " << -1 << " " << -1;

    return 0;
}