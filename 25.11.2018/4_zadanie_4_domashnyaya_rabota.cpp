#include <iostream>

using namespace std;

int main(){
    int n, k = 0, size_;
    bool* A;
    cin >> n;
    if (n >= 5)
        size_ = 2*n;
    else
        size_ = 3*n;
    if (n == 1)
        size_ = 4*n;
    A = new bool (3*n);
    A[0] = A[1] = 0;
    for (int i = 2; i <= size_; i++)
        A[i] = 0;
    for (int i = 2; i <= size_; i++)
        if (!A[i])
            for (int j = i+i; j <= size_; j+=i)
                A[j] = 1;
    for (int i = 2; i <= size_; i++){
        if (k == n)
            break;
        if (A[i]){
            cout << i << endl;
            k++;
        };
    };
    return 0;
}
