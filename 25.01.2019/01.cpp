#include <iostream>

using namespace std;

int main(){
	int x, y;
	cin >> x >> y;
	int *d = new int[y+1];
	for (int i = 0; i <= y; i++){
		if (i == x){
			d[i] = 1;
		}
		else if (i <= x){
			d[i] = 0;
		}
		else if ((i % 2 == 0) && (i % 3 == 0)){
			d[i] = d[i - 1] + d[i / 2] + d[i / 3];
		}
		else if ((i % 2 == 0) && (i % 3 != 0)){
			d[i] = d[i-1] + d[i/2];
		}
		else if ((i % 2 != 0) && (i % 3 == 0)){
			d[i] = d[i - 1] + d[i / 3];
		}
		else if ((i % 2 != 0) && (i % 3 != 0)){
			d[i] = d[i - 1];
		}
	}
	cout << d[y];
	return 0;
}
