#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
int main()
{
    string S, T;
    cin >> S >> T;
    int min = T.length();
    for (int i = 0; i <= S.length() - T.length(); i++)
    {

        int cnt = 0;
        for (int j = 0; j < T.length(); j++)
        {
            if (S[i + j] != T[j])
            {
                cnt++;
                //cout << S[i + j] << T[j] << cnt << endl;
            }
        }
        if (cnt < min)
            min = cnt;
    }
    cout << min;

    return 0;
}