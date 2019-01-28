#include <iostream>

using namespace std;

int main(){
	int x, y, z;
	cin >> x >> y >> z;
	int *d = new int[y + 1];
	for (int i = 0; i <= y; i++){
		if (i == x){
			d[i] = 1;
		}
		else if (i <= x){
			d[i] = 0;
		}
		else if (i == z){
			d[i] = 0;
		}
		else if ((i % 2 != 0) && (i % 10 == 0)){
			d[i] = d[i - 1] + d[(i - 1) / 2] + d[i / 10];
		}
		else if ((i % 2 != 0) && (i % 10 != 0)){
			d[i] = d[i - 1] + d[(i - 1) / 2];
		}
		else if ((i % 2 == 0) && (i % 10 == 0)){
			d[i] = d[i - 1] + d[i / 2] + d[i / 10];
		}
		else if ((i % 2 == 0) && (i % 10 != 0)){
			d[i] = d[i - 1] + d[i / 2];
		}
	}
	cout << d[y];
	return 0;
}
