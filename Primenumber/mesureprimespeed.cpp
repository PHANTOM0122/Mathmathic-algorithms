#include <iostream>
#include <ctime>
#include <cmath>\

using namespace std;

bool Is_Prime(int num) {

	//Except 2 is prime number!
	if (num == 2)
		return true;
	//Prime numbers are odds & max_factor is their own self.
	else {
		for (int i = 2; i <= num; i++) {
			if (num % i == 0 && i < num)
				return false;
		}
	}
}


int main() {
	int input;
	clock_t start_time = clock();
	clock_t end_time;

	//Enter a number
	cout << "Enter a number: ";
	cin >> input;

	//Display the prime numbers between 2 and 500,000 and time how long it takes;
	for (int i = 2; i <= input; i++) {
		if (Is_Prime(i))
			cout << i << " ";
	}
	
	//Measuring end time
	end_time = clock();

	//Showing caculating time
	cout << "Elasped Time: " << (static_cast<double>(end_time - start_time) / 1000) << " seconds" << endl;
}