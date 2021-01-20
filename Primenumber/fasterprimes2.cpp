#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

const int MAX = 2000;

vector<bool> nonprimes(MAX);

void count_primes1() {
	int count = 0;
	clock_t start_time = clock(); // Record start time
	for (int value = 2; value < MAX; value++) {
		// See if value is prime
		bool is_prime = true;
		// Try all possible factors from 2 to the value -1
		for (int trial_factor = 2; is_prime && trial_factor < value; trial_factor++)
			is_prime = (value % trial_factor != 0);
		if (is_prime)
			count++;
	}
	std::cout << "Count = " << count << " ";
	std::cout << "Elapsed time: "
		<< static_cast<double>(clock() - start_time) / CLOCKS_PER_SEC
		<< " seconds\n";
}

void count_primes2() {
	int count = 0;
	clock_t start_time = clock();
	for (int value = 2; value <= MAX; value++) {
		// See if value is prime
		bool is_prime = true;
		double r = value, root = sqrt(r);
		for (int trial_factor = 2; is_prime && trial_factor <= root; trial_factor++) {
			if (value % trial_factor == 0)
				is_prime = false;
		}
		if (is_prime)
			count++;
	}
	std::cout << "Count = " << count << " ";
	std::cout << "Elapsed time: "
		<< static_cast<double>(clock() - start_time) / CLOCKS_PER_SEC
		<< " seconds\n";
}

void count_primes3() {
	int count = 0;
	clock_t start_time = clock();
	nonprimes[0] = nonprimes[1] = true;

	for (int i = 0; i < MAX; i++) {
		if (!nonprimes[i]) {
			count++;
			for (int j = 2 * i; j < MAX; j += i)
				nonprimes[j] = true;
		}
	}
	std::cout << "Count = " << count << " ";
	std::cout << "Elapsed time: "
		<< static_cast<double>(clock() - start_time) / CLOCKS_PER_SEC
		<< " seconds\n";
}

int main() {
	count_primes1();
	count_primes2();
	count_primes3();
}