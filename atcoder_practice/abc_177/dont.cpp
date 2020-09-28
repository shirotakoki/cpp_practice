#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int D, T, S;
    cin >> D >> T >> S;

    int dist = T * S;
    if(D-dist <= 0)
        cout << "Yes";
    else
        cout << "No";
        
    return 0;
}