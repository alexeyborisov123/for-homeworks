#include <iostream>
#include<cmath>

using namespace std;

int main(){
    int x, y;
    cin >> x;
    while (x != 0)
    {
        y = sqrt(x);
        x = x - y * y;
	    cout << y*y << "  ";
    };
    return 0;
}

