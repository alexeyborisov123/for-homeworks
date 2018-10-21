/*Напишите программу проверяющую является ли число составным.
В программе гарантируется, что число - натуральное.
*/
#include <iostream>;
using namespace std;
int main()
{
    int a, b, c, i = 0;
    cin>> a;
    if (a == 1)
    {
        cout<< a << ":" << " unit";
    } else
    {
        b = a / 2 + 1;
        while (i != b)
        {
            i = i + 1;
            if (a%i == 0)
            {
                c = i;
            }
        }
        if (c == 1)
        {
            cout<< a << ":" << " prime";
        } else
        {
            cout<< c << "  " << a << ":" << " composite";
        }
    }
    return 0;
}
