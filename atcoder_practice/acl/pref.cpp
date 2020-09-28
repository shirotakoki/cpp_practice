#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    if (C <= A && D >= A)
    {
        cout << "Yes";
    }
    else if (C >= A && C <= B)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}
