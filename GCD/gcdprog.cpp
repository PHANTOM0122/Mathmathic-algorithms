#include <iostream>

using namespace std;

int main() {
	// Prompt user for input
	int num1, num2;
	cout << "Please enter two integers: ";
	cin >> num1 >> num2;

	// Determine the smaller of num1 and num2
	int min = (num1 < num2) ? num1 : num2;

	// 1 is definitely a common factor to all ints
	int largestFactor = 1;
	for (int i = 2; i <= min; i++)
		if (num1 % i == 0 && num2 % 1 == 0)
			largestFactor = i; // Found larger factor
	cout << num1 << " and " << num2 << " GCD is " << largestFactor << endl;
}