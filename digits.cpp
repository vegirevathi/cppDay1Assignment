#include <iostream>
using namespace std;

int main() {
	int x;

	cout << "Enter a single digit number ";
	cin >> x;
	switch(x) {
	case 1:
		cout << "ONE";
		break;
	case 2:
		cout << "TWO";
		break;
	case 3:
		cout << "THREE";
		break;
	case 4:
		cout << "FOUR";
		break;
	case 5:
		cout << "FIVE";
		break;
	case 6:
		cout << "SIX";
		break;
	case 7:
		cout << "SEVEN";
		break;
	case 8:
		cout << "EIGHT";
		break;
	case 9:
		cout << "NINE";
		break;
	default:
		cout << "Enter single digit number";
		break;
	}
}
