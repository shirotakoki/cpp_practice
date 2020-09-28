#include <iostream>
#include <tuple>
#include <math.h>

using namespace std;
int main()
{
    int N;
    cin >> N;
    tuple<double, double> *dot = new tuple<double, double>[N];

    for (int i = 0; i < N; i++)
    {
        double x, y;
        cin >> x >> y;
        dot[i] = make_tuple(x, y);
    }
    double max = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
                break;
            double dist = sqrt(pow(get<0>(dot[i]) - get<0>(dot[j]), 2) + pow(get<1>(dot[i]) - get<1>(dot[j]), 2));
            float floor_dist = floor(1000 * dist) / 1000;
            if (max < floor_dist)
                max = dist;
        }
    }
    cout << max;

    return 0;
}