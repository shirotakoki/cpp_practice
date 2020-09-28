#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    long long num1 = a * c;
    long long num2 = a * d;
    long long num3 = b * c;
    long long num4 = b * d;
    long long ans = max({num1, num2, num3, num4});
    cout << ans;

    return 0;
}