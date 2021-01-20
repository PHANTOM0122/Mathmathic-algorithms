#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

// Largest potential prime
const int MAX = 500;

vector<bool> nonprimes(MAX); // Global vector initailized to all false

int main() {
	clock_t start_time = clock(); // REcord start time

	// First prime number is 2; 0 and 1 are not prime
	nonprimes[0] = nonprimes[1] = true;

	// Start at the first prime number, 2
	for (int i = 0; i < MAX; i++) {
		if (!nonprimes[i]) {
			cout << i << " ";

			// It is prime, so eliminate all of its multiples that cannot be prime
			for (int j = 2 * i; j < MAX; j += i) {
				nonprimes[j] = true;
			}
		}
	}

	cout << endl;
	cout << "Elapesed time: " << static_cast<double>(clock() - start_time) / CLOCKS_PER_SEC << " seconds";
}