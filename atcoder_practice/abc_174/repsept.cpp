#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    int K;
    cin >> K;
    if(K%2 == 0){ 
        cout << -1;
    }else{ 
        unsigned long long num = 7;
        int count = 1;
        while(1){ 
            if(num%K == 0){ 
                break;
            }
            count++;
            num = 7 + (num*10);
        }
        cout << count;
    }

    return 0;
}