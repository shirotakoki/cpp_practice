#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    long long N;
    cin >> N;
    if(N==1){
        cout << 0;
        return 0;
    }
    vector<long long> X(N);
    unsigned long long sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }
    for (int i = 0; i < X.size()-1;i++){
        if(X[i] - X[i+1] >0){
            sum += X[i] - X[i + 1];
            X[i+1] += X[i] - X[i + 1];
        }
    }
        cout << sum;
    return 0;
}