#include <iostream>

using namespace std;

bool Search(int *arr, int n, int x, int q, int p = 0){
	if (arr[(q + p) / 2] == x)
		return 1;
	if (q - p <= 1)
		return 0;
	if (arr[(p + q) / 2] > x)
		Search(arr, n, x, (p + q) / 2, p);
	if (arr[(p + q) / 2] < x)
		Search(arr, n, x, q, (p + q) / 2);
}

int main(){
	int n;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int a, b;
	cin >> a >> b;
	if (Search(arr, n, a, n) && Search(arr, n, b, n) == true)
		cout << "Yes ";
	else cout << "No ";
	delete[] arr;
	return 0;
}

