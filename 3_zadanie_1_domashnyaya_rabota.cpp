#include <iostream>
using namespace std;
int main ()
{
    int s = 0, i, n = 0;
     while (i != 0)
     {
         cin>> i;
         s = s + i;
         n = n + 1;
     }
     cout<< s/n;
     return 0;
}
