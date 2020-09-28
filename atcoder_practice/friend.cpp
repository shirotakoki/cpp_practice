#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(M);
    vector<int> B(M);
    for (int i; i < M; i++)
    {
        cin >> A[i] >> B[i];
    }

    return 0;
}