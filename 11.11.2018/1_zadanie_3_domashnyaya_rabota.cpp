#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int c = 1;
    for (int i = 2; i <= b; i++)
    {
        if (((a % i) == 0) && ((b % i) == 0))
        {
            c = i;
        };
    };
    return c;
}


int Eulier(int n, int k)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        if (gcd(n,k) == 1)
        {
            return (1 + Eulier(n-1, k));
        }
        else
        {
            return Eulier(n-1, k);
        };
    };
}


int Eulier(int n)
{
    return Eulier(n,n);
}


int main()
{
    int a;
    cin >> a;
    cout << Eulier(a);
}
