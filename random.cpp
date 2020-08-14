#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	int randomNumber;
		randomNumber = (rand()% 6) + 1;
		cout << "Random number is " << randomNumber <<"\n";
}

