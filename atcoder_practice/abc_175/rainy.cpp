#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main()
{
    char S[3];
    cin >> S;
    int count = 0;
    int MAX = 0;
    for (int i = 0; i<3;i++)
    {   
        if(S[i] == 'R')
            count++;
            if(count>MAX)
                MAX = count;
        if(S[i] == 'S')
            count = 0;
    }
    cout << MAX;
    return 0;
}