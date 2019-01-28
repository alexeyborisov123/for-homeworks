#include <iostream>
#include <cmath>

using namespace std;

bool sqr(int n){
	int squareRootN = (int)(sqrt((double)n) + 0.5);
	return squareRootN * squareRootN == n;
}
int main(){
	int x, y;
	cin >> x >> y;
	bool *d = new bool[y + 1];
	for (int i = 0; i <= y; i++){
		if (i == x){
			d[i] = 1;
		}
		else if (i <= x){
			d[i] = 0;
		}
		else if ((sqr(i) == true) && (i % 7 == 0) && (i % 10 == 1)){
			d[i] = d[i - 9] || d[(int)sqrt(i)] || d[i / 7] || d[(i - 1) / 10];
		}
		else if ((sqr(i) == true) && (i % 7 == 0) && (i % 10 != 1)){
			d[i] = d[i - 9] || d[(int)sqrt(i)] || d[i / 7];
		}
		else if ((sqr(i) == true) && (i % 7 != 0) && (i % 10 == 1)){
			d[i] = d[i - 9] || d[(int)sqrt(i)] || d[(i - 1) / 10];
		}
		else if ((sqr(i) == true) && (i % 7 != 0) && (i % 10 != 1)){
			d[i] = d[i - 9] || d[(int)sqrt(i)];
		}
		else if ((sqr(i) == false) && (i % 7 != 0) && (i % 10 != 1)){
			d[i] = d[i - 9];
		}
		else if ((sqr(i) == false) && (i % 7 == 0) && (i % 10 == 1)){
			d[i] = d[i - 9] || d[i / 7] || d[(i - 1) / 10];
		}
		else if ((sqr(i) == false) && (i % 7 == 0) && (i % 10 != 1)){
			d[i] = d[i - 9] || d[i / 7];
		}
		else if ((sqr(i) == false) && (i % 7 != 0) && (i % 10 == 1)){
			d[i] = d[i - 9] || d[(i - 1) / 10];
		}

	}
	if (d[y] == 1){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}
