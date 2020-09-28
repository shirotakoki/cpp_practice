#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int N;
    int X;
    int T;
    cin >> N >> X >> T;
    int cnt = 0;
    while(N>0)
    {
        cnt += T;
        N -= X;
    }
    cout << cnt;
    return 0;
}