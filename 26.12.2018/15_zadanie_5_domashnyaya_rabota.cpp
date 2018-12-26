#include <iostream>

#include <cmath>

using namespace std;

double L(double x1, double y1, double x2, double y2){
	double dx = x1 - x2 ;
	double dy = y1 - y2;
	double k = sqrt(dx * dx + dy * dy );
	return k;
}
int main(){
    int n;
    cin >> n;
    double x[n];
    double y[n];
    for (int j = 0; j < n; j++)
        cin >> x[j]>> y[j];
    double s;
    double Smin = L(x[1], y[1], x[2], y[2]);
    for (int j = 0; j < n; j++){
        for (int i = j + 1; i < n; i++){
            s = L(x[j], y[j], x[i], y[i]);
            if (Smin > s){
                    Smin = s;
                }
        };
    };
    cout << Smin;
    return 0;
}
