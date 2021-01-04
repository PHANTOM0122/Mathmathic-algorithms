#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int n) {
	bool result = true;
	double r = n, root = sqrt(r); // Try all possible factors from 2 to the square root of n

	for (int trial_factor = 2; result && trial_factor <= root; trial_factor++)
		result = (n % trial_factor != 0);
	return result;
}

int main() {
	int max_value;
	cout << "Display primes up to what value? ";
	cin >> max_value;

	for (int value = 1; value <= max_value; value++)
		if (is_prime(value))
			cout << value << " ";
	cout << endl;
}