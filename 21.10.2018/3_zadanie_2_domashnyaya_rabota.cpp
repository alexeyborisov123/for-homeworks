/*

*/
#include <iostream>
using namespace std;
struct Array
{
    int arraySize;
    int *data;
    Array (int a)
    {
        arraySize = a;
        data = new int [a];
    };
    Array (const Array& A)
    {
        arraySize = A.arraySize;
        data = A.data;
    };
    ~Array ()
    {
        delete[] data;
    };
    void input ()
    {
        for (int i = 0; i < arraySize; i++)
            cin >> *(data + i );
    };
    void output()
    {
        for (int i = 0; i < arraySize; i++)
            cout << *(data + i) <<" ";
        cout << endl;
    };
    int &operator[](int i)
    {
        return data[i];
    };
    int Max ()
    {
        int s = *data;
        for (int i = 0; i < arraySize; i++)
            if (*(data + i) > s)
                s = *(data + i);
        return s;
    };
    int Min ()
    {
        int s = *data;
        for (int i = 0; i < arraySize; i++)
            if (*(data + i) < s)
                s = *(data + i);
        return s;
    }

};
int main()
{
    int n;
    cout << "Array size: ";
    cin >> n;
    cout << endl;
    Array a(n);
    cout << "Array components";
    cout << endl;
    a.input();
    cout << endl;
    a.output();
    cout << a.Max();
    cout << endl;
    cout << a.Min();
    cout << endl;
    return 0;
}
