#include <iostream>

using namespace std;

int main()
{
    int n;
    bool* A;
    bool* B;
    cin >> n;
    A = new bool (n + 3);
    B = new bool (n + 3);
    for (int i = 2; i <= n+2; i++)
    {
        B[i] = 0;
        A[i] = 1;
    };
    A[0] = A[1] = A[n +1] = A[n+2] = 0;
    for (int i = 2; i <= n; i++)
        if (A[i])
            for (int j = i+i; j <= n; j+=i)
                A[j] = 0;
    for (int i = 2; i <= n+2; i++)
    {
        for (int j = 2; j <= n+2; j++)
        {
            if (!A[j])
                continue;
            if (((i) % j == 0) && (A[(i)/j]))
                B[i] = 1;
        }
        if (A[i])
            B[i] = 1;
    };
    for (int i = 2; i <= n; i++)
        if (A[i] && B[i+2])
            cout << i << ' ' << endl;
    return 0;
}
