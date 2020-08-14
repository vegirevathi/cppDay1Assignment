#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));

	int toss;
	toss = rand() % 3;

	if (toss == 1) {
		cout << "HEAD";
	} else {
		cout << "TAIL";
	}
}
