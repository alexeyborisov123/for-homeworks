#include <iostream>

using namespace std;

int main(){
	int N, m = 1;
	cin >> N;
	int *d = new int[N];
	for (int i = 0; i < N; i++){
		cin >> d[i];
	}
	for(int i = 0; i < N; i++){
		if ((d[i] % 2 == 0) && (d[i] % 3 == 0)){
			m *= d[i];
		}
	}
	cout << m;
	return 0;
}
