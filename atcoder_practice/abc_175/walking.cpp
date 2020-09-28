#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;
int main()
{
    long long X;
    long long K;
    long long D;
    set<int> s;
    cin >> X >> K >> D;
    if(abs(X) - )
    for (long long i = 0; i < K;i++)
    {
        long long ad = X + D;
        long long sb = X - D;
        if(abs(ad) > abs(sb))
            X = X - D;
        else
            X = X + D;
        if(s.count(X) > 0)
        {
            if((K-i+1)%2 == 1)
            {
                long long ad = X + D;
                long long sb = X - D;
                if(abs(ad) > abs(sb))
                    X = X - D;
                else
                    X = X + D;
            }
            break;
        }
        s.insert(X);
    }
    cout << abs(X);
    return 0;
}