#include <iostream>
using namespace std;

int a1, b1, c1;


int min(int a,int b,int c)
{

	int min;

	 if ((a <= b)&&(a<=c))
    {
        min = a;
    } else
	{
    if ((b <= a)&&(b<=c))
        {
            min = b;
        } else
        {
    	min = c;
        }
	}
    return min;
}

int max (int a,int b, int c)
{

    int max;
	 if ((a >= b)&&(a>=c))
        {
            max = a;
	    } else
	{
    if ((b >= a)&&(b>=c)) {
        max = b;
    } else
        {
    	    max = c;
        }
	}
    return max;


}

int avg (int a,int b, int c)
{
	return (a+b+c)/3;
}

int med (int a, int b, int c)
{
		int med;
	 if (((a >= b)&&(a<=c))||((a<=b)&&(a>=c))) {
        med = a;
	} else
	{
    if (((b >= a)&&(b<=c))||((b<=a)&&(b>=c))) {
        med = b;
    } else
    {
    	med = c;
    }
	}
    return med;

}

void swap (int* a, int* b, int* c)
{
	int i = *b, j= *c, k = *a;
	*b=k;
	*c=i;
	*a=j;
	return;
}

int main()
{
    cin >>a1>>b1>>c1;
    int* pa1 = &a1;
    int* pb1 = &b1;
    int* pc1 = &c1;
    cout<<min (a1,b1,c1)<<"\n";
    cout<<max (a1,b1,c1)<<"\n";
    cout<<avg (a1,b1,c1)<<"\n";
    cout<<med (a1,b1,c1)<<"\n";
    swap (pa1,pb1,pc1);
    cout<<*pa1<<*pb1<<*pc1<<"\n";
    return 0;
}

