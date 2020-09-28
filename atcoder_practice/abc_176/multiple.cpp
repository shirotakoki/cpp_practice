#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    string str;
    cin >> str;
    vector<int> nums(str.size());
    int sum = 0;
    transform(str.begin(), str.end(), nums.begin(), [](char ch) { return ch - '0';});

    for (int n:nums)
        sum += n;

    if (sum % 9 == 0)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}