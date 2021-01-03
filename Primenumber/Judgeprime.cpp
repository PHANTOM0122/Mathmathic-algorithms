#include <iostream>
#include <cmath>

using namespace std;

/*Judging function whether input number is prime
Common things of prime numbers are they are odds(except 2) and their max_factor is same as prime numbers. 
*/
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
	int num;
	cout << "Enter number: ";
	cin >> num;
	if (Is_Prime(num))
		cout << num << " is prime number!!" << endl;
	else
		cout << num << " is not prime number!!" << endl; 
}


//Another sample codes
/*
int main() {
	int max_value;
	cout << "Display primes up to what value? ";
	cin >> max_value;

	for (int value = 2; value <= max_value; value++) {
		
		//see if value is prime 
		bool is_prime = true; // Provisionally, value is prime
		double r = value, root = sqrt(r);
		
		//Try all possible factor from 2 to the square root of value
		for (int trial_factor = 2; is_prime && trial_factor <= root; trial_factor++)
			is_prime = (value % trial_factor != 0);
		if (is_prime)
			cout << value << " "; // Display the prime number
	}
	cout << endl;
}*/