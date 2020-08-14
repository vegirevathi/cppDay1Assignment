#include <iostream>

using namespace std;

int main() {
	int x ,y;
	cout << "Enter month " <<"\n";
	cin >> x;
	cout << "Enter day " << "\n";
	cin >> y;

	if (x ==3) {
		if ( y >= 20 && y <= 31 ) {
			cout << "True";
		}
		else {
			cout << "False";
		}
	} else if ( x > 3 && x < 6 ) {
			if ( y > 0 && y <= 31 ) {
				cout << "true";
			}
		else {
			cout << "false";
		} 
	} else if ( x == 6 ) {
		if ( y > 0 && y <= 20 ) {
			cout << "True";
		}
		else {
			cout << "False";
		}
	} else {
		cout << "False";
	}
}
