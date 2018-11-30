#include <iostream>

using namespace std;

int main(){
    int n, k = 0, a;
    bool* A;
    cin >> n;
    if (n >= 5)
        a = 2*n;
    else
        a = 3*n;
    if (n == 1)
        a = 4*n;
    A = new bool (3*n);
    A[0] = A[1] = 0;
    for (int i = 2; i <= a; i++)
        A[i] = 0;
    for (int i = 2; i <= a; i++)
        if (!A[i])
            for (int j = i+i; j <= a; j+=i)
                A[j] = 1;
    for (int i = 2; i <= a; i++){
        if (k == n)
            break;
        if (A[i]){
            cout << i << endl;
            k++;
        };
    };
    return 0;
}
