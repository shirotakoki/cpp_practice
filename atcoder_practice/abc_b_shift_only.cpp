#include <iostream>

using namespace std;
int main()
{
    int N;
    cin >> N;
    int *A = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int cnt = 0;
    bool fl = true;
    while(fl){
        for (int i = 0; i < N;i++){
            if(A[i]%2 != 0){
                fl = false;
                break;
            }
            A[i] /= 2;
        }
        if(fl)
            cnt++;
    }
    cout << cnt;
    return 0;
}
