#include <iostream>
using namespace std;
int nod(int x, int n)
{
while (n!=x)
if (x>n) x-=n;
else n-=x;
return x;
}
int main ()
{
int x, n;
int y = 0;
cin>> x;
cin>> n;
if (nod(x, n) != 1)
{
    cout<< "none";
} else
{
  while ((x*y)%n != 1)
  {
      y = y + 1;
  }
  cout<< y;
}
return 0;
}
