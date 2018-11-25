#include <iostream>

using namespace std;

int main(){
    int n, e;
    cin >> n;
    e = n;
    for (int i = 2; i*i <= n; i++)
    if (n % i == 0){
        while (n % i == 0) n/= i;
        e-=e/i;
    };
    if (n > 1) e-=e/n;
        cout << e;
    return 0;
}
