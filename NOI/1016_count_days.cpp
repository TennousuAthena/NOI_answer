#include <iostream>

using namespace std;

int main() {
	int y, m, o;
	cin >> y >> m;
	switch (m) {
	case 1:
		o = 31;
		break;
	case 3:
		o = 31;
		break;
	case 4:
		o = 30;
		break;
	case 5:
		o = 31;
		break;
	case 6:
		o = 30;
		break;
	case 7:
		o = 31;
		break;
	case 8:
		o = 31;
		break;
	case 9:
		o = 30;
		break;
	case 10:
		o = 31;
		break;
	case 11:
		o = 30;
		break;
	case 12:
		o = 31;
		break;
	}
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
		if (m == 2) {
			o = 29;
		}
		cout << o;
	}
	else {
		if (m == 2) {
			o = 28;
		}
		cout << o;
	}

	return 0;
}

