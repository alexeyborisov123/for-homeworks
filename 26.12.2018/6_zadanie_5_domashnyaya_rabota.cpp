#include <iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    bool arr[n];
    arr[0] = 0;
    arr[1] = 0;
    cout << "0  1";
    for (int i = 2; i < n; i++){
        arr[i] = 0;
    }
    for (int i = 2; i < n; i++){
        if (arr[i] != 1){
            cout << "  "<< i;
            for (int j = 0; i * j < n; j++){
                if (arr[j] != 1)
                    arr[j * i] = 1;
            }
        }
    }
    return 0;
}
