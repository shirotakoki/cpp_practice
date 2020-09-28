#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int N;
    int D;
    cin >> N;
    cin >> D;
    vector<int> X(N);
    vector<int> Y(N);
    int cnt = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
        cin >> Y[i];
        if(sqrt(X[i]*X[i] + Y[i]*Y[i])){ 
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}