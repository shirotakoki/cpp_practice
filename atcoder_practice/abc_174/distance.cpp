#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main()
{
    int N;
    double D;
    cin >> N;
    cin >> D;
    vector<double> X(N);
    vector<double> Y(N);
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
        cin >> Y[i];
        if(sqrt(X[i]*X[i] + Y[i]*Y[i]) <= D){ 
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}