#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main()
{
    int N;
    cin >> N;
    if(N<3)
    {
        cout << 0;
        return 0;
    }
    vector<int> L(N);
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        for(int j = i+1; j < N; j++)
        {
            for (int k = j + 1; k < N;k++)
            {
                if ((L[i] != L[j]) && (L[j] != L[k]) && (L[i] != L[k])&& (abs(L[i]-L[j])<L[k]) && (L[k]<(L[i]+L[j])))
                {
                    //cout << L[i] << L[j] << L[k] << endl;
                    //cout << i+1 << j+1 << k+1 << endl;
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}