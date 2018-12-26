#include <iostream>

using namespace std;

void Swap (int& a, int& b){
    int temp = b;
    b = a;
    a = temp;
};

void qsort(int * arr, int a, int b){
    int i = a, j = b;
    int tmp;
    int S = arr[(a + b) / 2];
    while (i <= j){
        while (arr[i] < S)
                i++;
        while (arr[j] > S)
                j--;
        if (i <= j){
                Swap (arr[i], arr[j]);
                i++;
                j--;
        }
    };
    if (a < j)
        qsort(arr, a, j);
    if (i < b)
        qsort(arr, i, b);
}

int main(){
    int n, k;
    cin >> n;
    int* arr = new int [n];
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    cin >> k;
    qsort (arr, 1, n);
    cout << arr[k];
    return 0;
}
