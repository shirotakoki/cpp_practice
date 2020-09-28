#include <iostream>
#include <vector>
#include <stdio.h>
#include <atcoder/dsu>
#include <cstdio>

using namespace std;
using namespace atcoder;
int main()
{
    int N, M;
    cin >> N >> M;
    dsu d(N);
    for (int i = 0; i < M; i++)
    {
        int a = 0, b = 0;
        scanf("%d %d", &a, &b);
        d.merge(a - 1, b - 1);
    }
    vector<vector<int>> n = d.groups();
    int ans = n.size() - 1;
    cout << ans;
    return 0;
}