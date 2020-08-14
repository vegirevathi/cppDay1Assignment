#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	int toss;
	int i;
	int headcount = 0;
	int tailcount = 0;

	srand(time(NULL));

	do {
		toss = rand() % 2;
		if (toss == 1) {
			cout << "HEAD\n";
			headcount++;
		} else {
			cout << "TAIL\n";
			tailcount++;
		}
	} while (headcount < 11 && tailcount < 11);
		(headcount == 11) ? cout << "Head comes " <<headcount <<"times\n" : cout << "tail comes " << tailcount <<"times";
		return 0;
}
