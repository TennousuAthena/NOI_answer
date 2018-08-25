#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float wei, cost;
	cin >> wei;
	if (wei <= 10) {
		cost = wei * 0.8;
	}
	else if (wei <= 20) {
		cost = (wei-10) * 0.75 + 8;
	}
	else if (wei <= 30) {
		cost = (wei-20) * 0.7 + 8 + 7.5;
	}
	else {
		cout << "Fail" << endl;
		return 0;
	}
	cost = cost + 0.2;
	cout << fixed << setprecision(2) << cost;

    return 0;
}
