#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() 
{
	float R, X, P, Y;

	cin >> R >> X >> P;
	Y = X * pow((100 + R) / 100, P);
	cout << fixed << setprecision(2) << Y << endl;

	return 0;
}
