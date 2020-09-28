#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int H, W, M;
    cin >> H >> W >> M;

    vector<long long> X(M);
    vector<long long> Y(M);
    for (int i = 0; i < M;i++){
        cin >> X[i];
        cin >> Y[i];
    }
    int x_max = 0;
    int y_max = 0;
    for (int x = 0; x < H;x++){
        int num = count(Y.begin(), Y.end(), x);
        if(num> x_max)
            x_max = num;
    }
    for (int y = 0; y < W;y++){
        int num = count(X.begin(), X.end(), y);
        if(num> y_max)
            y_max = num;
    }   
    cout << x_max+y_max;
    return 0;
}