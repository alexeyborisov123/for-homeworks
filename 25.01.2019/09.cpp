#include <iostream>

using namespace std;

void knight(int x, int y, int n, int k = 0){
	if (((x + 1) && (y + 2) < n) && (k < 3)){
	knight(x + 1,y + 2, n, k);
	cout << x << "  " << y << "  ";
	k++;
	}
	if (((x - 1) && (y + 2) < n) && (k < 3)){
	k++;
	knight(x - 1, y + 2, n, k);
	cout << x << "  " << y << "  ";
	}
	if (((x + 2) && (y + 1) < n) && (k < 3)){
	k++;
	knight(x + 2, y + 1, n, k);
	cout << x << "  " << y << "  ";
	}
	if (((x - 2) && (y + 1) < n) && (k < 3)){
	k++;
	knight(x - 2, y + 1, n, k);
	cout << x << "  " << y << "  ";
	}
	if (((x + 1) && (y - 2) < n) && (k < 3)){
	k++;
	knight(x + 1, y - 2, n, k);
	cout << x << "  " << y << "  ";
	}
	if (((x - 1) && (y - 2) < n) && (k < 3)){
	k++;
	knight(x - 1, y - 2, n, k);
	cout<< x << "  " << y << "  ";
	}
	if (((x + 2) && (y - 1) < n) && (k < 3)){
	k++;
	knight(x + 2, y - 1, n, k);
	cout << x << "  " << y << "  ";
	}
	if (((x - 2) && (y - 1) < n) && (k < 3)){
	k++;
	knight(x - 2, y - 1, n, k);
	cout<< x << "  " << y << "  ";
	}
}

int main(){
	int N;
	int x1, y1;
	cin >> N >> x1 >> y1;
	int ans;
    int a = 0;
    knight(x1, y1, N, a);
	return 0;
}
